#include "strings_conn_synapse228.h"

// strings_conn_synapse228 Initialisation function
void StringsConnSynapse228Init(StringsConnSynapse228* me) {
    // Initialise State
    me->state = STRINGS_CONN_SYNAPSE228_L;

    // Initialise Outputs
    me->out = 0.0;

    // Initialise Internal Variables
    me->alpha = 0.001 / (0.1 + 0.001);
}

// strings_conn_synapse228 Execution function
void StringsConnSynapse228Run(StringsConnSynapse228* me) {
    // Create intermediary variables
    enum StringsConnSynapse228States state_u = me->state;
    double out_u = me->out;

    double alpha_u = me->alpha;


    // Run the state machine for transition logic
    // This will only be inter-location transitions, with intra-location transitions happening later
    switch(me->state) {
        case STRINGS_CONN_SYNAPSE228_L: // Logic for state l
            break;
    }

    // Update from intermediary variables
    me->state = state_u;
    me->out = out_u;

    me->alpha = alpha_u;


    // Intra-location logic for every state
    switch(me->state) {
        case STRINGS_CONN_SYNAPSE228_L: // Intra-location logic for state l
            out_u = me->alpha * me->in + (1.0 - me->alpha) * me->out;

            break;
    }

    // Update from intermediary variables
    me->out = out_u;

    me->alpha = alpha_u;

}