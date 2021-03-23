#ifndef STRINGS_CONN_SYNAPSE375_H_
#define STRINGS_CONN_SYNAPSE375_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse375 States
enum StringsConnSynapse375States {
    STRINGS_CONN_SYNAPSE375_L,
};

// strings_conn_synapse375 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse375States state;
} StringsConnSynapse375;

// strings_conn_synapse375 Initialisation function
void StringsConnSynapse375Init(StringsConnSynapse375* me);

// strings_conn_synapse375 Execution function
void StringsConnSynapse375Run(StringsConnSynapse375* me);

#endif // STRINGS_CONN_SYNAPSE375_H_