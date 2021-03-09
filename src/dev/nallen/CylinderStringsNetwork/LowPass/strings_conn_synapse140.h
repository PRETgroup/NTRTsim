#ifndef STRINGS_CONN_SYNAPSE140_H_
#define STRINGS_CONN_SYNAPSE140_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse140 States
enum StringsConnSynapse140States {
    STRINGS_CONN_SYNAPSE140_L,
};

// strings_conn_synapse140 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse140States state;
} StringsConnSynapse140;

// strings_conn_synapse140 Initialisation function
void StringsConnSynapse140Init(StringsConnSynapse140* me);

// strings_conn_synapse140 Execution function
void StringsConnSynapse140Run(StringsConnSynapse140* me);

#endif // STRINGS_CONN_SYNAPSE140_H_