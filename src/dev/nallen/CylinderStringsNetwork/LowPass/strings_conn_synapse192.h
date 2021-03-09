#ifndef STRINGS_CONN_SYNAPSE192_H_
#define STRINGS_CONN_SYNAPSE192_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse192 States
enum StringsConnSynapse192States {
    STRINGS_CONN_SYNAPSE192_L,
};

// strings_conn_synapse192 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse192States state;
} StringsConnSynapse192;

// strings_conn_synapse192 Initialisation function
void StringsConnSynapse192Init(StringsConnSynapse192* me);

// strings_conn_synapse192 Execution function
void StringsConnSynapse192Run(StringsConnSynapse192* me);

#endif // STRINGS_CONN_SYNAPSE192_H_