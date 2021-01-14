#include "ensemble2_87.h"

// ensemble2_87 Initialisation function
void Ensemble287Init(Ensemble287* me) {
    // Initialise State
    me->state = ENSEMBLE2_87_INTEGRATE;

    // Initialise Outputs
    me->spike = false;
    me->v = 0.0;

    // Initialise Internal Variables
    me->t = 0.0;
}

// ensemble2_87 Execution function
void Ensemble287Run(Ensemble287* me) {
    // Create intermediary variables
    enum Ensemble287States state_u = me->state;
    bool spike_u = me->spike;
    double v_u = me->v;

    double t_u = me->t;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case ENSEMBLE2_87_INTEGRATE: // Logic for state integrate
            if(me->v == 1.0) {
                v_u = 0.0;
                spike_u = true;
                t_u = 0.0;

                // Next state is spike
                state_u = ENSEMBLE2_87_SPIKE;
            }
            else if(me->v == 0.0 && me->in < 0.0) {
                v_u = 0.0;

                // Next state is limit
                state_u = ENSEMBLE2_87_LIMIT;
            }
            break;
        case ENSEMBLE2_87_LIMIT: // Logic for state limit
            if(me->in >= 0.0) {
                v_u = 0.0;

                // Next state is integrate
                state_u = ENSEMBLE2_87_INTEGRATE;
            }
            break;
        case ENSEMBLE2_87_SPIKE: // Logic for state spike
            if(me->t == 0.002) {
                spike_u = false;

                // Next state is integrate
                state_u = ENSEMBLE2_87_INTEGRATE;
            }
            else if(me->t < 0.002) {
                spike_u = false;

                // Next state is refractory
                state_u = ENSEMBLE2_87_REFRACTORY;
            }
            break;
        case ENSEMBLE2_87_REFRACTORY: // Logic for state refractory
            if(me->t == 0.002) {
                // Next state is integrate
                state_u = ENSEMBLE2_87_INTEGRATE;
            }
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->spike = spike_u;
    me->v = v_u;

    me->t = t_u;


    // Intra-location logic for every state
    switch(me->state) {
        case ENSEMBLE2_87_INTEGRATE: // Intra-location logic for state integrate
            v_u = me->v + (1.0 / 0.02) * (me->in - me->v) * STEP_SIZE;

            if((v_u > 1.0 && me->v < 1.0) || (v_u < 1.0 && me->v > 1.0)) {
                // Need to saturate v to 1.0
                v_u = 1.0;
            }
            if((v_u > 0.0 && me->v < 0.0) || (v_u < 0.0 && me->v > 0.0)) {
                // Need to saturate v to 0.0
                v_u = 0.0;
            }

            break;
        case ENSEMBLE2_87_LIMIT: // Intra-location logic for state limit
            v_u = 0.0;

            break;
        case ENSEMBLE2_87_SPIKE: // Intra-location logic for state spike
            t_u = me->t + 1.0 * STEP_SIZE;

            if(t_u < 0.002 && me->t > 0.002) {
                // Need to saturate t to 0.002
                t_u = 0.002;
            }
            if((t_u > 0.002 && me->t < 0.002) || (t_u < 0.002 && me->t > 0.002)) {
                // Need to saturate t to 0.002
                t_u = 0.002;
            }

            break;
        case ENSEMBLE2_87_REFRACTORY: // Intra-location logic for state refractory
            t_u = me->t + 1.0 * STEP_SIZE;

            if((t_u > 0.002 && me->t < 0.002) || (t_u < 0.002 && me->t > 0.002)) {
                // Need to saturate t to 0.002
                t_u = 0.002;
            }

            break;
    }

    // Update from intermediary variables
    me->spike = spike_u;
    me->v = v_u;

    me->t = t_u;

}