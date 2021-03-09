#ifndef STRINGS_CONN_SYNAPSE42_H_
#define STRINGS_CONN_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse42 States
enum StringsConnSynapse42States {
    STRINGS_CONN_SYNAPSE42_L,
};

// strings_conn_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse42States state;
} StringsConnSynapse42;

// strings_conn_synapse42 Initialisation function
void StringsConnSynapse42Init(StringsConnSynapse42* me);

// strings_conn_synapse42 Execution function
void StringsConnSynapse42Run(StringsConnSynapse42* me);

#endif // STRINGS_CONN_SYNAPSE42_H_