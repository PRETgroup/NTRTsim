#ifndef STRINGS_CONN_SYNAPSE368_H_
#define STRINGS_CONN_SYNAPSE368_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse368 States
enum StringsConnSynapse368States {
    STRINGS_CONN_SYNAPSE368_L,
};

// strings_conn_synapse368 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse368States state;
} StringsConnSynapse368;

// strings_conn_synapse368 Initialisation function
void StringsConnSynapse368Init(StringsConnSynapse368* me);

// strings_conn_synapse368 Execution function
void StringsConnSynapse368Run(StringsConnSynapse368* me);

#endif // STRINGS_CONN_SYNAPSE368_H_