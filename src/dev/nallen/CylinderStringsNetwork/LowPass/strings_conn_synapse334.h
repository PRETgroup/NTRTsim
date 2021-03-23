#ifndef STRINGS_CONN_SYNAPSE334_H_
#define STRINGS_CONN_SYNAPSE334_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse334 States
enum StringsConnSynapse334States {
    STRINGS_CONN_SYNAPSE334_L,
};

// strings_conn_synapse334 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse334States state;
} StringsConnSynapse334;

// strings_conn_synapse334 Initialisation function
void StringsConnSynapse334Init(StringsConnSynapse334* me);

// strings_conn_synapse334 Execution function
void StringsConnSynapse334Run(StringsConnSynapse334* me);

#endif // STRINGS_CONN_SYNAPSE334_H_