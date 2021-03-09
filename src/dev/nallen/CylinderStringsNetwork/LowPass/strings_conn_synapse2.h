#ifndef STRINGS_CONN_SYNAPSE2_H_
#define STRINGS_CONN_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse2 States
enum StringsConnSynapse2States {
    STRINGS_CONN_SYNAPSE2_L,
};

// strings_conn_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse2States state;
} StringsConnSynapse2;

// strings_conn_synapse2 Initialisation function
void StringsConnSynapse2Init(StringsConnSynapse2* me);

// strings_conn_synapse2 Execution function
void StringsConnSynapse2Run(StringsConnSynapse2* me);

#endif // STRINGS_CONN_SYNAPSE2_H_