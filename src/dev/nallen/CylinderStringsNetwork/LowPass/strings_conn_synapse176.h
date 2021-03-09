#ifndef STRINGS_CONN_SYNAPSE176_H_
#define STRINGS_CONN_SYNAPSE176_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse176 States
enum StringsConnSynapse176States {
    STRINGS_CONN_SYNAPSE176_L,
};

// strings_conn_synapse176 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse176States state;
} StringsConnSynapse176;

// strings_conn_synapse176 Initialisation function
void StringsConnSynapse176Init(StringsConnSynapse176* me);

// strings_conn_synapse176 Execution function
void StringsConnSynapse176Run(StringsConnSynapse176* me);

#endif // STRINGS_CONN_SYNAPSE176_H_