#ifndef STRINGS_CONN_SYNAPSE129_H_
#define STRINGS_CONN_SYNAPSE129_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse129 States
enum StringsConnSynapse129States {
    STRINGS_CONN_SYNAPSE129_L,
};

// strings_conn_synapse129 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse129States state;
} StringsConnSynapse129;

// strings_conn_synapse129 Initialisation function
void StringsConnSynapse129Init(StringsConnSynapse129* me);

// strings_conn_synapse129 Execution function
void StringsConnSynapse129Run(StringsConnSynapse129* me);

#endif // STRINGS_CONN_SYNAPSE129_H_