#ifndef STRINGS_CONN_SYNAPSE320_H_
#define STRINGS_CONN_SYNAPSE320_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse320 States
enum StringsConnSynapse320States {
    STRINGS_CONN_SYNAPSE320_L,
};

// strings_conn_synapse320 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse320States state;
} StringsConnSynapse320;

// strings_conn_synapse320 Initialisation function
void StringsConnSynapse320Init(StringsConnSynapse320* me);

// strings_conn_synapse320 Execution function
void StringsConnSynapse320Run(StringsConnSynapse320* me);

#endif // STRINGS_CONN_SYNAPSE320_H_