#ifndef STRINGS_CONN_SYNAPSE1_H_
#define STRINGS_CONN_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse1 States
enum StringsConnSynapse1States {
    STRINGS_CONN_SYNAPSE1_L,
};

// strings_conn_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse1States state;
} StringsConnSynapse1;

// strings_conn_synapse1 Initialisation function
void StringsConnSynapse1Init(StringsConnSynapse1* me);

// strings_conn_synapse1 Execution function
void StringsConnSynapse1Run(StringsConnSynapse1* me);

#endif // STRINGS_CONN_SYNAPSE1_H_