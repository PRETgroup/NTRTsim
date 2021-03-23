#include "position_conn_synapse203.h"

// position_conn_synapse203 Initialisation function
void PositionConnSynapse203Init(PositionConnSynapse203* me) {
    // Initialise State
    me->state = POSITION_CONN_SYNAPSE203_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = 0.001 / (0.1 + 0.001);
}

// position_conn_synapse203 Execution function
void PositionConnSynapse203Run(PositionConnSynapse203* me) {
    // Create intermediary variables
    enum PositionConnSynapse203States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case POSITION_CONN_SYNAPSE203_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case POSITION_CONN_SYNAPSE203_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}