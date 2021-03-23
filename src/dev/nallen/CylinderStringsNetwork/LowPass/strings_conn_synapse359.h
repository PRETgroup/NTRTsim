#ifndef STRINGS_CONN_SYNAPSE359_H_
#define STRINGS_CONN_SYNAPSE359_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse359 States
enum StringsConnSynapse359States {
    STRINGS_CONN_SYNAPSE359_L,
};

// strings_conn_synapse359 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse359States state;
} StringsConnSynapse359;

// strings_conn_synapse359 Initialisation function
void StringsConnSynapse359Init(StringsConnSynapse359* me);

// strings_conn_synapse359 Execution function
void StringsConnSynapse359Run(StringsConnSynapse359* me);

#endif // STRINGS_CONN_SYNAPSE359_H_