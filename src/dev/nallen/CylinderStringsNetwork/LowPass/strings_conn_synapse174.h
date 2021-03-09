#ifndef STRINGS_CONN_SYNAPSE174_H_
#define STRINGS_CONN_SYNAPSE174_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse174 States
enum StringsConnSynapse174States {
    STRINGS_CONN_SYNAPSE174_L,
};

// strings_conn_synapse174 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse174States state;
} StringsConnSynapse174;

// strings_conn_synapse174 Initialisation function
void StringsConnSynapse174Init(StringsConnSynapse174* me);

// strings_conn_synapse174 Execution function
void StringsConnSynapse174Run(StringsConnSynapse174* me);

#endif // STRINGS_CONN_SYNAPSE174_H_