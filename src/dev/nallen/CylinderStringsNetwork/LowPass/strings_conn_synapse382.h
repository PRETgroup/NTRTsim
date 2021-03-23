#ifndef STRINGS_CONN_SYNAPSE382_H_
#define STRINGS_CONN_SYNAPSE382_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse382 States
enum StringsConnSynapse382States {
    STRINGS_CONN_SYNAPSE382_L,
};

// strings_conn_synapse382 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse382States state;
} StringsConnSynapse382;

// strings_conn_synapse382 Initialisation function
void StringsConnSynapse382Init(StringsConnSynapse382* me);

// strings_conn_synapse382 Execution function
void StringsConnSynapse382Run(StringsConnSynapse382* me);

#endif // STRINGS_CONN_SYNAPSE382_H_