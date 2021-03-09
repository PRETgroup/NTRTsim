#ifndef STRINGS_CONN_SYNAPSE58_H_
#define STRINGS_CONN_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse58 States
enum StringsConnSynapse58States {
    STRINGS_CONN_SYNAPSE58_L,
};

// strings_conn_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse58States state;
} StringsConnSynapse58;

// strings_conn_synapse58 Initialisation function
void StringsConnSynapse58Init(StringsConnSynapse58* me);

// strings_conn_synapse58 Execution function
void StringsConnSynapse58Run(StringsConnSynapse58* me);

#endif // STRINGS_CONN_SYNAPSE58_H_