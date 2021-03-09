#ifndef STRINGS_CONN_SYNAPSE67_H_
#define STRINGS_CONN_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse67 States
enum StringsConnSynapse67States {
    STRINGS_CONN_SYNAPSE67_L,
};

// strings_conn_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse67States state;
} StringsConnSynapse67;

// strings_conn_synapse67 Initialisation function
void StringsConnSynapse67Init(StringsConnSynapse67* me);

// strings_conn_synapse67 Execution function
void StringsConnSynapse67Run(StringsConnSynapse67* me);

#endif // STRINGS_CONN_SYNAPSE67_H_