#ifndef STRINGS_CONN_SYNAPSE230_H_
#define STRINGS_CONN_SYNAPSE230_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse230 States
enum StringsConnSynapse230States {
    STRINGS_CONN_SYNAPSE230_L,
};

// strings_conn_synapse230 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse230States state;
} StringsConnSynapse230;

// strings_conn_synapse230 Initialisation function
void StringsConnSynapse230Init(StringsConnSynapse230* me);

// strings_conn_synapse230 Execution function
void StringsConnSynapse230Run(StringsConnSynapse230* me);

#endif // STRINGS_CONN_SYNAPSE230_H_