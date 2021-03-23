#ifndef STRINGS_CONN_SYNAPSE354_H_
#define STRINGS_CONN_SYNAPSE354_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse354 States
enum StringsConnSynapse354States {
    STRINGS_CONN_SYNAPSE354_L,
};

// strings_conn_synapse354 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse354States state;
} StringsConnSynapse354;

// strings_conn_synapse354 Initialisation function
void StringsConnSynapse354Init(StringsConnSynapse354* me);

// strings_conn_synapse354 Execution function
void StringsConnSynapse354Run(StringsConnSynapse354* me);

#endif // STRINGS_CONN_SYNAPSE354_H_