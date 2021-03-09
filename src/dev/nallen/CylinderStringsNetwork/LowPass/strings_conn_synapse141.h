#ifndef STRINGS_CONN_SYNAPSE141_H_
#define STRINGS_CONN_SYNAPSE141_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse141 States
enum StringsConnSynapse141States {
    STRINGS_CONN_SYNAPSE141_L,
};

// strings_conn_synapse141 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse141States state;
} StringsConnSynapse141;

// strings_conn_synapse141 Initialisation function
void StringsConnSynapse141Init(StringsConnSynapse141* me);

// strings_conn_synapse141 Execution function
void StringsConnSynapse141Run(StringsConnSynapse141* me);

#endif // STRINGS_CONN_SYNAPSE141_H_