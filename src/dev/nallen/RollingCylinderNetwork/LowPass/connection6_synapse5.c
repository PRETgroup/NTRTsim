#include "connection6_synapse5.h"

// connection6_synapse5 Initialisation function
void Connection6Synapse5Init(Connection6Synapse5* me) {
    // Initialise State
    me->state = CONNECTION6_SYNAPSE5_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = 0.001 / (0.1 + 0.001);
}

// connection6_synapse5 Execution function
void Connection6Synapse5Run(Connection6Synapse5* me) {
    // Create intermediary variables
    enum Connection6Synapse5States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case CONNECTION6_SYNAPSE5_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case CONNECTION6_SYNAPSE5_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}