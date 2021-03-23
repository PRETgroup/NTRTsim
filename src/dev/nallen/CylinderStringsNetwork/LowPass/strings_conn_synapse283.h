#ifndef STRINGS_CONN_SYNAPSE283_H_
#define STRINGS_CONN_SYNAPSE283_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse283 States
enum StringsConnSynapse283States {
    STRINGS_CONN_SYNAPSE283_L,
};

// strings_conn_synapse283 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse283States state;
} StringsConnSynapse283;

// strings_conn_synapse283 Initialisation function
void StringsConnSynapse283Init(StringsConnSynapse283* me);

// strings_conn_synapse283 Execution function
void StringsConnSynapse283Run(StringsConnSynapse283* me);

#endif // STRINGS_CONN_SYNAPSE283_H_