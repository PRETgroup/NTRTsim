#include "position_conn_synapse76.h"

// position_conn_synapse76 Initialisation function
void PositionConnSynapse76Init(PositionConnSynapse76* me) {
    // Initialise State
    me->state = POSITION_CONN_SYNAPSE76_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = STEP_SIZE / (0.1 + STEP_SIZE);
}

// position_conn_synapse76 Execution function
void PositionConnSynapse76Run(PositionConnSynapse76* me) {
    // Create intermediary variables
    enum PositionConnSynapse76States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case POSITION_CONN_SYNAPSE76_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case POSITION_CONN_SYNAPSE76_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}