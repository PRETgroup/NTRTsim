#ifndef STRINGS_CONN_SYNAPSE292_H_
#define STRINGS_CONN_SYNAPSE292_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse292 States
enum StringsConnSynapse292States {
    STRINGS_CONN_SYNAPSE292_L,
};

// strings_conn_synapse292 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse292States state;
} StringsConnSynapse292;

// strings_conn_synapse292 Initialisation function
void StringsConnSynapse292Init(StringsConnSynapse292* me);

// strings_conn_synapse292 Execution function
void StringsConnSynapse292Run(StringsConnSynapse292* me);

#endif // STRINGS_CONN_SYNAPSE292_H_