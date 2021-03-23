#ifndef STRINGS_CONN_SYNAPSE395_H_
#define STRINGS_CONN_SYNAPSE395_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse395 States
enum StringsConnSynapse395States {
    STRINGS_CONN_SYNAPSE395_L,
};

// strings_conn_synapse395 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse395States state;
} StringsConnSynapse395;

// strings_conn_synapse395 Initialisation function
void StringsConnSynapse395Init(StringsConnSynapse395* me);

// strings_conn_synapse395 Execution function
void StringsConnSynapse395Run(StringsConnSynapse395* me);

#endif // STRINGS_CONN_SYNAPSE395_H_