#ifndef STRINGS_CONN_SYNAPSE190_H_
#define STRINGS_CONN_SYNAPSE190_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse190 States
enum StringsConnSynapse190States {
    STRINGS_CONN_SYNAPSE190_L,
};

// strings_conn_synapse190 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse190States state;
} StringsConnSynapse190;

// strings_conn_synapse190 Initialisation function
void StringsConnSynapse190Init(StringsConnSynapse190* me);

// strings_conn_synapse190 Execution function
void StringsConnSynapse190Run(StringsConnSynapse190* me);

#endif // STRINGS_CONN_SYNAPSE190_H_