#include "connection1_synapse25.h"

// connection1_synapse25 Initialisation function
void Connection1Synapse25Init(Connection1Synapse25* me) {
    // Initialise State
    me->state = CONNECTION1_SYNAPSE25_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = 0.001 / (0.01 + 0.001);
}

// connection1_synapse25 Execution function
void Connection1Synapse25Run(Connection1Synapse25* me) {
    // Create intermediary variables
    enum Connection1Synapse25States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case CONNECTION1_SYNAPSE25_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case CONNECTION1_SYNAPSE25_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}