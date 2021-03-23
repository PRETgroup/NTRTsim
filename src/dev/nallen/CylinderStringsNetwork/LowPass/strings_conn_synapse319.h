#ifndef STRINGS_CONN_SYNAPSE319_H_
#define STRINGS_CONN_SYNAPSE319_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse319 States
enum StringsConnSynapse319States {
    STRINGS_CONN_SYNAPSE319_L,
};

// strings_conn_synapse319 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse319States state;
} StringsConnSynapse319;

// strings_conn_synapse319 Initialisation function
void StringsConnSynapse319Init(StringsConnSynapse319* me);

// strings_conn_synapse319 Execution function
void StringsConnSynapse319Run(StringsConnSynapse319* me);

#endif // STRINGS_CONN_SYNAPSE319_H_