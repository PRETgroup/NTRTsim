#ifndef STRINGS_CONN_SYNAPSE222_H_
#define STRINGS_CONN_SYNAPSE222_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse222 States
enum StringsConnSynapse222States {
    STRINGS_CONN_SYNAPSE222_L,
};

// strings_conn_synapse222 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse222States state;
} StringsConnSynapse222;

// strings_conn_synapse222 Initialisation function
void StringsConnSynapse222Init(StringsConnSynapse222* me);

// strings_conn_synapse222 Execution function
void StringsConnSynapse222Run(StringsConnSynapse222* me);

#endif // STRINGS_CONN_SYNAPSE222_H_