#ifndef STRINGS_CONN_SYNAPSE296_H_
#define STRINGS_CONN_SYNAPSE296_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse296 States
enum StringsConnSynapse296States {
    STRINGS_CONN_SYNAPSE296_L,
};

// strings_conn_synapse296 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse296States state;
} StringsConnSynapse296;

// strings_conn_synapse296 Initialisation function
void StringsConnSynapse296Init(StringsConnSynapse296* me);

// strings_conn_synapse296 Execution function
void StringsConnSynapse296Run(StringsConnSynapse296* me);

#endif // STRINGS_CONN_SYNAPSE296_H_