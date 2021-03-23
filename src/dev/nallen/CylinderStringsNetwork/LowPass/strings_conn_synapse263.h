#ifndef STRINGS_CONN_SYNAPSE263_H_
#define STRINGS_CONN_SYNAPSE263_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse263 States
enum StringsConnSynapse263States {
    STRINGS_CONN_SYNAPSE263_L,
};

// strings_conn_synapse263 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse263States state;
} StringsConnSynapse263;

// strings_conn_synapse263 Initialisation function
void StringsConnSynapse263Init(StringsConnSynapse263* me);

// strings_conn_synapse263 Execution function
void StringsConnSynapse263Run(StringsConnSynapse263* me);

#endif // STRINGS_CONN_SYNAPSE263_H_