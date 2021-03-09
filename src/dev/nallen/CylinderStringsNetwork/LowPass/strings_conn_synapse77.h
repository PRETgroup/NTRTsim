#ifndef STRINGS_CONN_SYNAPSE77_H_
#define STRINGS_CONN_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse77 States
enum StringsConnSynapse77States {
    STRINGS_CONN_SYNAPSE77_L,
};

// strings_conn_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse77States state;
} StringsConnSynapse77;

// strings_conn_synapse77 Initialisation function
void StringsConnSynapse77Init(StringsConnSynapse77* me);

// strings_conn_synapse77 Execution function
void StringsConnSynapse77Run(StringsConnSynapse77* me);

#endif // STRINGS_CONN_SYNAPSE77_H_