#ifndef STRINGS_CONN_SYNAPSE136_H_
#define STRINGS_CONN_SYNAPSE136_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse136 States
enum StringsConnSynapse136States {
    STRINGS_CONN_SYNAPSE136_L,
};

// strings_conn_synapse136 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse136States state;
} StringsConnSynapse136;

// strings_conn_synapse136 Initialisation function
void StringsConnSynapse136Init(StringsConnSynapse136* me);

// strings_conn_synapse136 Execution function
void StringsConnSynapse136Run(StringsConnSynapse136* me);

#endif // STRINGS_CONN_SYNAPSE136_H_