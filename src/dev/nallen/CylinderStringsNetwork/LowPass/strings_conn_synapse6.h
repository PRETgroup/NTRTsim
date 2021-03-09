#ifndef STRINGS_CONN_SYNAPSE6_H_
#define STRINGS_CONN_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse6 States
enum StringsConnSynapse6States {
    STRINGS_CONN_SYNAPSE6_L,
};

// strings_conn_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse6States state;
} StringsConnSynapse6;

// strings_conn_synapse6 Initialisation function
void StringsConnSynapse6Init(StringsConnSynapse6* me);

// strings_conn_synapse6 Execution function
void StringsConnSynapse6Run(StringsConnSynapse6* me);

#endif // STRINGS_CONN_SYNAPSE6_H_