#ifndef STRINGS_CONN_SYNAPSE281_H_
#define STRINGS_CONN_SYNAPSE281_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse281 States
enum StringsConnSynapse281States {
    STRINGS_CONN_SYNAPSE281_L,
};

// strings_conn_synapse281 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse281States state;
} StringsConnSynapse281;

// strings_conn_synapse281 Initialisation function
void StringsConnSynapse281Init(StringsConnSynapse281* me);

// strings_conn_synapse281 Execution function
void StringsConnSynapse281Run(StringsConnSynapse281* me);

#endif // STRINGS_CONN_SYNAPSE281_H_