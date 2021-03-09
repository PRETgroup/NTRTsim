#ifndef STRINGS_CONN_SYNAPSE146_H_
#define STRINGS_CONN_SYNAPSE146_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse146 States
enum StringsConnSynapse146States {
    STRINGS_CONN_SYNAPSE146_L,
};

// strings_conn_synapse146 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse146States state;
} StringsConnSynapse146;

// strings_conn_synapse146 Initialisation function
void StringsConnSynapse146Init(StringsConnSynapse146* me);

// strings_conn_synapse146 Execution function
void StringsConnSynapse146Run(StringsConnSynapse146* me);

#endif // STRINGS_CONN_SYNAPSE146_H_