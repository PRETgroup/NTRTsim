#include "connection3_synapse0.h"

// connection3_synapse0 Initialisation function
void Connection3Synapse0Init(Connection3Synapse0* me) {
    // Initialise State
    me->state = CONNECTION3_SYNAPSE0_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = 0.001 / (0.005 + 0.001);
}

// connection3_synapse0 Execution function
void Connection3Synapse0Run(Connection3Synapse0* me) {
    // Create intermediary variables
    enum Connection3Synapse0States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case CONNECTION3_SYNAPSE0_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case CONNECTION3_SYNAPSE0_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}