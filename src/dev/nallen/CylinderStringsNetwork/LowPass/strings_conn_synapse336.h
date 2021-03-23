#ifndef STRINGS_CONN_SYNAPSE336_H_
#define STRINGS_CONN_SYNAPSE336_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse336 States
enum StringsConnSynapse336States {
    STRINGS_CONN_SYNAPSE336_L,
};

// strings_conn_synapse336 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse336States state;
} StringsConnSynapse336;

// strings_conn_synapse336 Initialisation function
void StringsConnSynapse336Init(StringsConnSynapse336* me);

// strings_conn_synapse336 Execution function
void StringsConnSynapse336Run(StringsConnSynapse336* me);

#endif // STRINGS_CONN_SYNAPSE336_H_