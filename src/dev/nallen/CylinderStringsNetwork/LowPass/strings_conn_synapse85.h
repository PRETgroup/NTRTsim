#ifndef STRINGS_CONN_SYNAPSE85_H_
#define STRINGS_CONN_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse85 States
enum StringsConnSynapse85States {
    STRINGS_CONN_SYNAPSE85_L,
};

// strings_conn_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse85States state;
} StringsConnSynapse85;

// strings_conn_synapse85 Initialisation function
void StringsConnSynapse85Init(StringsConnSynapse85* me);

// strings_conn_synapse85 Execution function
void StringsConnSynapse85Run(StringsConnSynapse85* me);

#endif // STRINGS_CONN_SYNAPSE85_H_