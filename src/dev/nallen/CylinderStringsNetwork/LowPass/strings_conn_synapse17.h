#ifndef STRINGS_CONN_SYNAPSE17_H_
#define STRINGS_CONN_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse17 States
enum StringsConnSynapse17States {
    STRINGS_CONN_SYNAPSE17_L,
};

// strings_conn_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse17States state;
} StringsConnSynapse17;

// strings_conn_synapse17 Initialisation function
void StringsConnSynapse17Init(StringsConnSynapse17* me);

// strings_conn_synapse17 Execution function
void StringsConnSynapse17Run(StringsConnSynapse17* me);

#endif // STRINGS_CONN_SYNAPSE17_H_