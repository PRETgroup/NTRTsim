#ifndef STRINGS_CONN_SYNAPSE154_H_
#define STRINGS_CONN_SYNAPSE154_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse154 States
enum StringsConnSynapse154States {
    STRINGS_CONN_SYNAPSE154_L,
};

// strings_conn_synapse154 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse154States state;
} StringsConnSynapse154;

// strings_conn_synapse154 Initialisation function
void StringsConnSynapse154Init(StringsConnSynapse154* me);

// strings_conn_synapse154 Execution function
void StringsConnSynapse154Run(StringsConnSynapse154* me);

#endif // STRINGS_CONN_SYNAPSE154_H_