#include "connection13_synapse67.h"

// connection13_synapse67 Initialisation function
void Connection13Synapse67Init(Connection13Synapse67* me) {
    // Initialise State
    me->state = CONNECTION13_SYNAPSE67_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = 0.001 / (0.01 + 0.001);
}

// connection13_synapse67 Execution function
void Connection13Synapse67Run(Connection13Synapse67* me) {
    // Create intermediary variables
    enum Connection13Synapse67States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case CONNECTION13_SYNAPSE67_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case CONNECTION13_SYNAPSE67_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}