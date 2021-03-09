#ifndef STRINGS_CONN_SYNAPSE26_H_
#define STRINGS_CONN_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse26 States
enum StringsConnSynapse26States {
    STRINGS_CONN_SYNAPSE26_L,
};

// strings_conn_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse26States state;
} StringsConnSynapse26;

// strings_conn_synapse26 Initialisation function
void StringsConnSynapse26Init(StringsConnSynapse26* me);

// strings_conn_synapse26 Execution function
void StringsConnSynapse26Run(StringsConnSynapse26* me);

#endif // STRINGS_CONN_SYNAPSE26_H_