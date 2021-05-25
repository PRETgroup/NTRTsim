#ifndef STRINGS_CONN_SYNAPSE387_H_
#define STRINGS_CONN_SYNAPSE387_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse387 States
enum StringsConnSynapse387States {
    STRINGS_CONN_SYNAPSE387_L,
};

// strings_conn_synapse387 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse387States state;
} StringsConnSynapse387;

// strings_conn_synapse387 Initialisation function
void StringsConnSynapse387Init(StringsConnSynapse387* me);

// strings_conn_synapse387 Execution function
void StringsConnSynapse387Run(StringsConnSynapse387* me);

#endif // STRINGS_CONN_SYNAPSE387_H_