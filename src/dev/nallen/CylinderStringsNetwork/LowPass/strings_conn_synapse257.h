#ifndef STRINGS_CONN_SYNAPSE257_H_
#define STRINGS_CONN_SYNAPSE257_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse257 States
enum StringsConnSynapse257States {
    STRINGS_CONN_SYNAPSE257_L,
};

// strings_conn_synapse257 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse257States state;
} StringsConnSynapse257;

// strings_conn_synapse257 Initialisation function
void StringsConnSynapse257Init(StringsConnSynapse257* me);

// strings_conn_synapse257 Execution function
void StringsConnSynapse257Run(StringsConnSynapse257* me);

#endif // STRINGS_CONN_SYNAPSE257_H_