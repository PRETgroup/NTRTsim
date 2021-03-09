#ifndef STRINGS_CONN_SYNAPSE60_H_
#define STRINGS_CONN_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse60 States
enum StringsConnSynapse60States {
    STRINGS_CONN_SYNAPSE60_L,
};

// strings_conn_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse60States state;
} StringsConnSynapse60;

// strings_conn_synapse60 Initialisation function
void StringsConnSynapse60Init(StringsConnSynapse60* me);

// strings_conn_synapse60 Execution function
void StringsConnSynapse60Run(StringsConnSynapse60* me);

#endif // STRINGS_CONN_SYNAPSE60_H_