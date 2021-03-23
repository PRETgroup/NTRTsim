#ifndef STRINGS_CONN_SYNAPSE268_H_
#define STRINGS_CONN_SYNAPSE268_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse268 States
enum StringsConnSynapse268States {
    STRINGS_CONN_SYNAPSE268_L,
};

// strings_conn_synapse268 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse268States state;
} StringsConnSynapse268;

// strings_conn_synapse268 Initialisation function
void StringsConnSynapse268Init(StringsConnSynapse268* me);

// strings_conn_synapse268 Execution function
void StringsConnSynapse268Run(StringsConnSynapse268* me);

#endif // STRINGS_CONN_SYNAPSE268_H_