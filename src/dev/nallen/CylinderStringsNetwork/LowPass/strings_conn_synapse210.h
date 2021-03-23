#ifndef STRINGS_CONN_SYNAPSE210_H_
#define STRINGS_CONN_SYNAPSE210_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse210 States
enum StringsConnSynapse210States {
    STRINGS_CONN_SYNAPSE210_L,
};

// strings_conn_synapse210 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse210States state;
} StringsConnSynapse210;

// strings_conn_synapse210 Initialisation function
void StringsConnSynapse210Init(StringsConnSynapse210* me);

// strings_conn_synapse210 Execution function
void StringsConnSynapse210Run(StringsConnSynapse210* me);

#endif // STRINGS_CONN_SYNAPSE210_H_