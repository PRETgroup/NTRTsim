#ifndef STRINGS_CONN_SYNAPSE173_H_
#define STRINGS_CONN_SYNAPSE173_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse173 States
enum StringsConnSynapse173States {
    STRINGS_CONN_SYNAPSE173_L,
};

// strings_conn_synapse173 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse173States state;
} StringsConnSynapse173;

// strings_conn_synapse173 Initialisation function
void StringsConnSynapse173Init(StringsConnSynapse173* me);

// strings_conn_synapse173 Execution function
void StringsConnSynapse173Run(StringsConnSynapse173* me);

#endif // STRINGS_CONN_SYNAPSE173_H_