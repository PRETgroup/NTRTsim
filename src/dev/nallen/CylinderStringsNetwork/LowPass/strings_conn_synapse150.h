#ifndef STRINGS_CONN_SYNAPSE150_H_
#define STRINGS_CONN_SYNAPSE150_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse150 States
enum StringsConnSynapse150States {
    STRINGS_CONN_SYNAPSE150_L,
};

// strings_conn_synapse150 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse150States state;
} StringsConnSynapse150;

// strings_conn_synapse150 Initialisation function
void StringsConnSynapse150Init(StringsConnSynapse150* me);

// strings_conn_synapse150 Execution function
void StringsConnSynapse150Run(StringsConnSynapse150* me);

#endif // STRINGS_CONN_SYNAPSE150_H_