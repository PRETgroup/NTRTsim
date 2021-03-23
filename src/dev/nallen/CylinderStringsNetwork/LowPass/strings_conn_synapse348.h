#ifndef STRINGS_CONN_SYNAPSE348_H_
#define STRINGS_CONN_SYNAPSE348_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse348 States
enum StringsConnSynapse348States {
    STRINGS_CONN_SYNAPSE348_L,
};

// strings_conn_synapse348 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse348States state;
} StringsConnSynapse348;

// strings_conn_synapse348 Initialisation function
void StringsConnSynapse348Init(StringsConnSynapse348* me);

// strings_conn_synapse348 Execution function
void StringsConnSynapse348Run(StringsConnSynapse348* me);

#endif // STRINGS_CONN_SYNAPSE348_H_