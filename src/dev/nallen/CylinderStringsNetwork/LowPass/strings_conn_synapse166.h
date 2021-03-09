#ifndef STRINGS_CONN_SYNAPSE166_H_
#define STRINGS_CONN_SYNAPSE166_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse166 States
enum StringsConnSynapse166States {
    STRINGS_CONN_SYNAPSE166_L,
};

// strings_conn_synapse166 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse166States state;
} StringsConnSynapse166;

// strings_conn_synapse166 Initialisation function
void StringsConnSynapse166Init(StringsConnSynapse166* me);

// strings_conn_synapse166 Execution function
void StringsConnSynapse166Run(StringsConnSynapse166* me);

#endif // STRINGS_CONN_SYNAPSE166_H_