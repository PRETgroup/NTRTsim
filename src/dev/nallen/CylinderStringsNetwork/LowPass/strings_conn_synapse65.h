#ifndef STRINGS_CONN_SYNAPSE65_H_
#define STRINGS_CONN_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse65 States
enum StringsConnSynapse65States {
    STRINGS_CONN_SYNAPSE65_L,
};

// strings_conn_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse65States state;
} StringsConnSynapse65;

// strings_conn_synapse65 Initialisation function
void StringsConnSynapse65Init(StringsConnSynapse65* me);

// strings_conn_synapse65 Execution function
void StringsConnSynapse65Run(StringsConnSynapse65* me);

#endif // STRINGS_CONN_SYNAPSE65_H_