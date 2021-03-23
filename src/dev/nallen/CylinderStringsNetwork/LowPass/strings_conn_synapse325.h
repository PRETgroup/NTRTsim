#ifndef STRINGS_CONN_SYNAPSE325_H_
#define STRINGS_CONN_SYNAPSE325_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse325 States
enum StringsConnSynapse325States {
    STRINGS_CONN_SYNAPSE325_L,
};

// strings_conn_synapse325 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse325States state;
} StringsConnSynapse325;

// strings_conn_synapse325 Initialisation function
void StringsConnSynapse325Init(StringsConnSynapse325* me);

// strings_conn_synapse325 Execution function
void StringsConnSynapse325Run(StringsConnSynapse325* me);

#endif // STRINGS_CONN_SYNAPSE325_H_