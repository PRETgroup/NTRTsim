#ifndef STRINGS_CONN_SYNAPSE246_H_
#define STRINGS_CONN_SYNAPSE246_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse246 States
enum StringsConnSynapse246States {
    STRINGS_CONN_SYNAPSE246_L,
};

// strings_conn_synapse246 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse246States state;
} StringsConnSynapse246;

// strings_conn_synapse246 Initialisation function
void StringsConnSynapse246Init(StringsConnSynapse246* me);

// strings_conn_synapse246 Execution function
void StringsConnSynapse246Run(StringsConnSynapse246* me);

#endif // STRINGS_CONN_SYNAPSE246_H_