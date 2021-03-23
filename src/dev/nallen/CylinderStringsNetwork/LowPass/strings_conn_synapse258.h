#ifndef STRINGS_CONN_SYNAPSE258_H_
#define STRINGS_CONN_SYNAPSE258_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse258 States
enum StringsConnSynapse258States {
    STRINGS_CONN_SYNAPSE258_L,
};

// strings_conn_synapse258 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse258States state;
} StringsConnSynapse258;

// strings_conn_synapse258 Initialisation function
void StringsConnSynapse258Init(StringsConnSynapse258* me);

// strings_conn_synapse258 Execution function
void StringsConnSynapse258Run(StringsConnSynapse258* me);

#endif // STRINGS_CONN_SYNAPSE258_H_