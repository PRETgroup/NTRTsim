#ifndef STRINGS_CONN_SYNAPSE245_H_
#define STRINGS_CONN_SYNAPSE245_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse245 States
enum StringsConnSynapse245States {
    STRINGS_CONN_SYNAPSE245_L,
};

// strings_conn_synapse245 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse245States state;
} StringsConnSynapse245;

// strings_conn_synapse245 Initialisation function
void StringsConnSynapse245Init(StringsConnSynapse245* me);

// strings_conn_synapse245 Execution function
void StringsConnSynapse245Run(StringsConnSynapse245* me);

#endif // STRINGS_CONN_SYNAPSE245_H_