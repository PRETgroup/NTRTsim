#ifndef STRINGS_CONN_SYNAPSE159_H_
#define STRINGS_CONN_SYNAPSE159_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse159 States
enum StringsConnSynapse159States {
    STRINGS_CONN_SYNAPSE159_L,
};

// strings_conn_synapse159 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse159States state;
} StringsConnSynapse159;

// strings_conn_synapse159 Initialisation function
void StringsConnSynapse159Init(StringsConnSynapse159* me);

// strings_conn_synapse159 Execution function
void StringsConnSynapse159Run(StringsConnSynapse159* me);

#endif // STRINGS_CONN_SYNAPSE159_H_