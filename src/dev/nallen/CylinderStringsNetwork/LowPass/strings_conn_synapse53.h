#ifndef STRINGS_CONN_SYNAPSE53_H_
#define STRINGS_CONN_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse53 States
enum StringsConnSynapse53States {
    STRINGS_CONN_SYNAPSE53_L,
};

// strings_conn_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse53States state;
} StringsConnSynapse53;

// strings_conn_synapse53 Initialisation function
void StringsConnSynapse53Init(StringsConnSynapse53* me);

// strings_conn_synapse53 Execution function
void StringsConnSynapse53Run(StringsConnSynapse53* me);

#endif // STRINGS_CONN_SYNAPSE53_H_