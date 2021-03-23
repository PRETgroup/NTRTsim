#ifndef STRINGS_CONN_SYNAPSE396_H_
#define STRINGS_CONN_SYNAPSE396_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse396 States
enum StringsConnSynapse396States {
    STRINGS_CONN_SYNAPSE396_L,
};

// strings_conn_synapse396 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse396States state;
} StringsConnSynapse396;

// strings_conn_synapse396 Initialisation function
void StringsConnSynapse396Init(StringsConnSynapse396* me);

// strings_conn_synapse396 Execution function
void StringsConnSynapse396Run(StringsConnSynapse396* me);

#endif // STRINGS_CONN_SYNAPSE396_H_