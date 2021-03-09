#ifndef STRINGS_CONN_SYNAPSE94_H_
#define STRINGS_CONN_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse94 States
enum StringsConnSynapse94States {
    STRINGS_CONN_SYNAPSE94_L,
};

// strings_conn_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse94States state;
} StringsConnSynapse94;

// strings_conn_synapse94 Initialisation function
void StringsConnSynapse94Init(StringsConnSynapse94* me);

// strings_conn_synapse94 Execution function
void StringsConnSynapse94Run(StringsConnSynapse94* me);

#endif // STRINGS_CONN_SYNAPSE94_H_