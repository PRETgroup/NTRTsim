#ifndef STRINGS_CONN_SYNAPSE309_H_
#define STRINGS_CONN_SYNAPSE309_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse309 States
enum StringsConnSynapse309States {
    STRINGS_CONN_SYNAPSE309_L,
};

// strings_conn_synapse309 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse309States state;
} StringsConnSynapse309;

// strings_conn_synapse309 Initialisation function
void StringsConnSynapse309Init(StringsConnSynapse309* me);

// strings_conn_synapse309 Execution function
void StringsConnSynapse309Run(StringsConnSynapse309* me);

#endif // STRINGS_CONN_SYNAPSE309_H_