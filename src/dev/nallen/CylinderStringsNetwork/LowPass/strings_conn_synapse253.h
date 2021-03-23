#ifndef STRINGS_CONN_SYNAPSE253_H_
#define STRINGS_CONN_SYNAPSE253_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse253 States
enum StringsConnSynapse253States {
    STRINGS_CONN_SYNAPSE253_L,
};

// strings_conn_synapse253 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse253States state;
} StringsConnSynapse253;

// strings_conn_synapse253 Initialisation function
void StringsConnSynapse253Init(StringsConnSynapse253* me);

// strings_conn_synapse253 Execution function
void StringsConnSynapse253Run(StringsConnSynapse253* me);

#endif // STRINGS_CONN_SYNAPSE253_H_