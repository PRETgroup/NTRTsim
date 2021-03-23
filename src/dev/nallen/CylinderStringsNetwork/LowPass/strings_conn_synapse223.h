#ifndef STRINGS_CONN_SYNAPSE223_H_
#define STRINGS_CONN_SYNAPSE223_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse223 States
enum StringsConnSynapse223States {
    STRINGS_CONN_SYNAPSE223_L,
};

// strings_conn_synapse223 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse223States state;
} StringsConnSynapse223;

// strings_conn_synapse223 Initialisation function
void StringsConnSynapse223Init(StringsConnSynapse223* me);

// strings_conn_synapse223 Execution function
void StringsConnSynapse223Run(StringsConnSynapse223* me);

#endif // STRINGS_CONN_SYNAPSE223_H_