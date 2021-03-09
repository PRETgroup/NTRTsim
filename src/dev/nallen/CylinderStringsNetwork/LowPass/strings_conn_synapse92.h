#ifndef STRINGS_CONN_SYNAPSE92_H_
#define STRINGS_CONN_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse92 States
enum StringsConnSynapse92States {
    STRINGS_CONN_SYNAPSE92_L,
};

// strings_conn_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse92States state;
} StringsConnSynapse92;

// strings_conn_synapse92 Initialisation function
void StringsConnSynapse92Init(StringsConnSynapse92* me);

// strings_conn_synapse92 Execution function
void StringsConnSynapse92Run(StringsConnSynapse92* me);

#endif // STRINGS_CONN_SYNAPSE92_H_