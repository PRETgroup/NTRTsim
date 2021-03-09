#ifndef STRINGS_CONN_SYNAPSE75_H_
#define STRINGS_CONN_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse75 States
enum StringsConnSynapse75States {
    STRINGS_CONN_SYNAPSE75_L,
};

// strings_conn_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse75States state;
} StringsConnSynapse75;

// strings_conn_synapse75 Initialisation function
void StringsConnSynapse75Init(StringsConnSynapse75* me);

// strings_conn_synapse75 Execution function
void StringsConnSynapse75Run(StringsConnSynapse75* me);

#endif // STRINGS_CONN_SYNAPSE75_H_