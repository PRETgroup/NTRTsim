#ifndef STRINGS_CONN_SYNAPSE226_H_
#define STRINGS_CONN_SYNAPSE226_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse226 States
enum StringsConnSynapse226States {
    STRINGS_CONN_SYNAPSE226_L,
};

// strings_conn_synapse226 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse226States state;
} StringsConnSynapse226;

// strings_conn_synapse226 Initialisation function
void StringsConnSynapse226Init(StringsConnSynapse226* me);

// strings_conn_synapse226 Execution function
void StringsConnSynapse226Run(StringsConnSynapse226* me);

#endif // STRINGS_CONN_SYNAPSE226_H_