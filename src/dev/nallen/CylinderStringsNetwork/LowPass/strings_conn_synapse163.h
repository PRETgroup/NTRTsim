#ifndef STRINGS_CONN_SYNAPSE163_H_
#define STRINGS_CONN_SYNAPSE163_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse163 States
enum StringsConnSynapse163States {
    STRINGS_CONN_SYNAPSE163_L,
};

// strings_conn_synapse163 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse163States state;
} StringsConnSynapse163;

// strings_conn_synapse163 Initialisation function
void StringsConnSynapse163Init(StringsConnSynapse163* me);

// strings_conn_synapse163 Execution function
void StringsConnSynapse163Run(StringsConnSynapse163* me);

#endif // STRINGS_CONN_SYNAPSE163_H_