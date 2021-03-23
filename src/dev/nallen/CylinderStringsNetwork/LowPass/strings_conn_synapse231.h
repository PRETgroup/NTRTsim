#ifndef STRINGS_CONN_SYNAPSE231_H_
#define STRINGS_CONN_SYNAPSE231_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse231 States
enum StringsConnSynapse231States {
    STRINGS_CONN_SYNAPSE231_L,
};

// strings_conn_synapse231 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse231States state;
} StringsConnSynapse231;

// strings_conn_synapse231 Initialisation function
void StringsConnSynapse231Init(StringsConnSynapse231* me);

// strings_conn_synapse231 Execution function
void StringsConnSynapse231Run(StringsConnSynapse231* me);

#endif // STRINGS_CONN_SYNAPSE231_H_