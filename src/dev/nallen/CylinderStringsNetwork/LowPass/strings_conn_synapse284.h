#ifndef STRINGS_CONN_SYNAPSE284_H_
#define STRINGS_CONN_SYNAPSE284_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse284 States
enum StringsConnSynapse284States {
    STRINGS_CONN_SYNAPSE284_L,
};

// strings_conn_synapse284 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse284States state;
} StringsConnSynapse284;

// strings_conn_synapse284 Initialisation function
void StringsConnSynapse284Init(StringsConnSynapse284* me);

// strings_conn_synapse284 Execution function
void StringsConnSynapse284Run(StringsConnSynapse284* me);

#endif // STRINGS_CONN_SYNAPSE284_H_