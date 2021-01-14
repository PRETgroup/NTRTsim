#include "connection6_synapse35.h"

// connection6_synapse35 Initialisation function
void Connection6Synapse35Init(Connection6Synapse35* me) {
    // Initialise State
    me->state = CONNECTION6_SYNAPSE35_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = 0.001 / (0.1 + 0.001);
}

// connection6_synapse35 Execution function
void Connection6Synapse35Run(Connection6Synapse35* me) {
    // Create intermediary variables
    enum Connection6Synapse35States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case CONNECTION6_SYNAPSE35_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case CONNECTION6_SYNAPSE35_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}