#ifndef STRINGS_CONN_SYNAPSE304_H_
#define STRINGS_CONN_SYNAPSE304_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse304 States
enum StringsConnSynapse304States {
    STRINGS_CONN_SYNAPSE304_L,
};

// strings_conn_synapse304 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse304States state;
} StringsConnSynapse304;

// strings_conn_synapse304 Initialisation function
void StringsConnSynapse304Init(StringsConnSynapse304* me);

// strings_conn_synapse304 Execution function
void StringsConnSynapse304Run(StringsConnSynapse304* me);

#endif // STRINGS_CONN_SYNAPSE304_H_