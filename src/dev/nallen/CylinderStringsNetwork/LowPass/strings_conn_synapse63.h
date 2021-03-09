#ifndef STRINGS_CONN_SYNAPSE63_H_
#define STRINGS_CONN_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse63 States
enum StringsConnSynapse63States {
    STRINGS_CONN_SYNAPSE63_L,
};

// strings_conn_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse63States state;
} StringsConnSynapse63;

// strings_conn_synapse63 Initialisation function
void StringsConnSynapse63Init(StringsConnSynapse63* me);

// strings_conn_synapse63 Execution function
void StringsConnSynapse63Run(StringsConnSynapse63* me);

#endif // STRINGS_CONN_SYNAPSE63_H_