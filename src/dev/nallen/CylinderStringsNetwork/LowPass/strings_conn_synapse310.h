#ifndef STRINGS_CONN_SYNAPSE310_H_
#define STRINGS_CONN_SYNAPSE310_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse310 States
enum StringsConnSynapse310States {
    STRINGS_CONN_SYNAPSE310_L,
};

// strings_conn_synapse310 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse310States state;
} StringsConnSynapse310;

// strings_conn_synapse310 Initialisation function
void StringsConnSynapse310Init(StringsConnSynapse310* me);

// strings_conn_synapse310 Execution function
void StringsConnSynapse310Run(StringsConnSynapse310* me);

#endif // STRINGS_CONN_SYNAPSE310_H_