#ifndef STRINGS_CONN_SYNAPSE356_H_
#define STRINGS_CONN_SYNAPSE356_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse356 States
enum StringsConnSynapse356States {
    STRINGS_CONN_SYNAPSE356_L,
};

// strings_conn_synapse356 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse356States state;
} StringsConnSynapse356;

// strings_conn_synapse356 Initialisation function
void StringsConnSynapse356Init(StringsConnSynapse356* me);

// strings_conn_synapse356 Execution function
void StringsConnSynapse356Run(StringsConnSynapse356* me);

#endif // STRINGS_CONN_SYNAPSE356_H_