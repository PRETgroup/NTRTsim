#ifndef STRINGS_CONN_SYNAPSE46_H_
#define STRINGS_CONN_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse46 States
enum StringsConnSynapse46States {
    STRINGS_CONN_SYNAPSE46_L,
};

// strings_conn_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse46States state;
} StringsConnSynapse46;

// strings_conn_synapse46 Initialisation function
void StringsConnSynapse46Init(StringsConnSynapse46* me);

// strings_conn_synapse46 Execution function
void StringsConnSynapse46Run(StringsConnSynapse46* me);

#endif // STRINGS_CONN_SYNAPSE46_H_