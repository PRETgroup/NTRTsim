#ifndef STRINGS_CONN_SYNAPSE316_H_
#define STRINGS_CONN_SYNAPSE316_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse316 States
enum StringsConnSynapse316States {
    STRINGS_CONN_SYNAPSE316_L,
};

// strings_conn_synapse316 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse316States state;
} StringsConnSynapse316;

// strings_conn_synapse316 Initialisation function
void StringsConnSynapse316Init(StringsConnSynapse316* me);

// strings_conn_synapse316 Execution function
void StringsConnSynapse316Run(StringsConnSynapse316* me);

#endif // STRINGS_CONN_SYNAPSE316_H_