#ifndef STRINGS_CONN_SYNAPSE57_H_
#define STRINGS_CONN_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse57 States
enum StringsConnSynapse57States {
    STRINGS_CONN_SYNAPSE57_L,
};

// strings_conn_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse57States state;
} StringsConnSynapse57;

// strings_conn_synapse57 Initialisation function
void StringsConnSynapse57Init(StringsConnSynapse57* me);

// strings_conn_synapse57 Execution function
void StringsConnSynapse57Run(StringsConnSynapse57* me);

#endif // STRINGS_CONN_SYNAPSE57_H_