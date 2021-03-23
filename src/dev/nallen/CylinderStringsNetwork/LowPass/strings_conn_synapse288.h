#ifndef STRINGS_CONN_SYNAPSE288_H_
#define STRINGS_CONN_SYNAPSE288_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse288 States
enum StringsConnSynapse288States {
    STRINGS_CONN_SYNAPSE288_L,
};

// strings_conn_synapse288 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse288States state;
} StringsConnSynapse288;

// strings_conn_synapse288 Initialisation function
void StringsConnSynapse288Init(StringsConnSynapse288* me);

// strings_conn_synapse288 Execution function
void StringsConnSynapse288Run(StringsConnSynapse288* me);

#endif // STRINGS_CONN_SYNAPSE288_H_