#ifndef STRINGS_CONN_SYNAPSE358_H_
#define STRINGS_CONN_SYNAPSE358_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse358 States
enum StringsConnSynapse358States {
    STRINGS_CONN_SYNAPSE358_L,
};

// strings_conn_synapse358 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse358States state;
} StringsConnSynapse358;

// strings_conn_synapse358 Initialisation function
void StringsConnSynapse358Init(StringsConnSynapse358* me);

// strings_conn_synapse358 Execution function
void StringsConnSynapse358Run(StringsConnSynapse358* me);

#endif // STRINGS_CONN_SYNAPSE358_H_