#ifndef STRINGS_CONN_SYNAPSE240_H_
#define STRINGS_CONN_SYNAPSE240_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse240 States
enum StringsConnSynapse240States {
    STRINGS_CONN_SYNAPSE240_L,
};

// strings_conn_synapse240 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse240States state;
} StringsConnSynapse240;

// strings_conn_synapse240 Initialisation function
void StringsConnSynapse240Init(StringsConnSynapse240* me);

// strings_conn_synapse240 Execution function
void StringsConnSynapse240Run(StringsConnSynapse240* me);

#endif // STRINGS_CONN_SYNAPSE240_H_