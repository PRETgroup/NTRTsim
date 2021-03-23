#ifndef STRINGS_CONN_SYNAPSE239_H_
#define STRINGS_CONN_SYNAPSE239_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse239 States
enum StringsConnSynapse239States {
    STRINGS_CONN_SYNAPSE239_L,
};

// strings_conn_synapse239 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse239States state;
} StringsConnSynapse239;

// strings_conn_synapse239 Initialisation function
void StringsConnSynapse239Init(StringsConnSynapse239* me);

// strings_conn_synapse239 Execution function
void StringsConnSynapse239Run(StringsConnSynapse239* me);

#endif // STRINGS_CONN_SYNAPSE239_H_