#ifndef STRINGS_CONN_SYNAPSE15_H_
#define STRINGS_CONN_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse15 States
enum StringsConnSynapse15States {
    STRINGS_CONN_SYNAPSE15_L,
};

// strings_conn_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse15States state;
} StringsConnSynapse15;

// strings_conn_synapse15 Initialisation function
void StringsConnSynapse15Init(StringsConnSynapse15* me);

// strings_conn_synapse15 Execution function
void StringsConnSynapse15Run(StringsConnSynapse15* me);

#endif // STRINGS_CONN_SYNAPSE15_H_