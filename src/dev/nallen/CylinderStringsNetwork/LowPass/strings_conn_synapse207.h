#ifndef STRINGS_CONN_SYNAPSE207_H_
#define STRINGS_CONN_SYNAPSE207_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse207 States
enum StringsConnSynapse207States {
    STRINGS_CONN_SYNAPSE207_L,
};

// strings_conn_synapse207 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse207States state;
} StringsConnSynapse207;

// strings_conn_synapse207 Initialisation function
void StringsConnSynapse207Init(StringsConnSynapse207* me);

// strings_conn_synapse207 Execution function
void StringsConnSynapse207Run(StringsConnSynapse207* me);

#endif // STRINGS_CONN_SYNAPSE207_H_