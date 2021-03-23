#ifndef STRINGS_CONN_SYNAPSE299_H_
#define STRINGS_CONN_SYNAPSE299_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse299 States
enum StringsConnSynapse299States {
    STRINGS_CONN_SYNAPSE299_L,
};

// strings_conn_synapse299 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse299States state;
} StringsConnSynapse299;

// strings_conn_synapse299 Initialisation function
void StringsConnSynapse299Init(StringsConnSynapse299* me);

// strings_conn_synapse299 Execution function
void StringsConnSynapse299Run(StringsConnSynapse299* me);

#endif // STRINGS_CONN_SYNAPSE299_H_