#ifndef STRINGS_CONN_SYNAPSE378_H_
#define STRINGS_CONN_SYNAPSE378_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse378 States
enum StringsConnSynapse378States {
    STRINGS_CONN_SYNAPSE378_L,
};

// strings_conn_synapse378 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse378States state;
} StringsConnSynapse378;

// strings_conn_synapse378 Initialisation function
void StringsConnSynapse378Init(StringsConnSynapse378* me);

// strings_conn_synapse378 Execution function
void StringsConnSynapse378Run(StringsConnSynapse378* me);

#endif // STRINGS_CONN_SYNAPSE378_H_