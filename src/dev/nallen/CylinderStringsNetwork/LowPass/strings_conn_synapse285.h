#ifndef STRINGS_CONN_SYNAPSE285_H_
#define STRINGS_CONN_SYNAPSE285_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse285 States
enum StringsConnSynapse285States {
    STRINGS_CONN_SYNAPSE285_L,
};

// strings_conn_synapse285 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse285States state;
} StringsConnSynapse285;

// strings_conn_synapse285 Initialisation function
void StringsConnSynapse285Init(StringsConnSynapse285* me);

// strings_conn_synapse285 Execution function
void StringsConnSynapse285Run(StringsConnSynapse285* me);

#endif // STRINGS_CONN_SYNAPSE285_H_