#ifndef STRINGS_CONN_SYNAPSE22_H_
#define STRINGS_CONN_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse22 States
enum StringsConnSynapse22States {
    STRINGS_CONN_SYNAPSE22_L,
};

// strings_conn_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse22States state;
} StringsConnSynapse22;

// strings_conn_synapse22 Initialisation function
void StringsConnSynapse22Init(StringsConnSynapse22* me);

// strings_conn_synapse22 Execution function
void StringsConnSynapse22Run(StringsConnSynapse22* me);

#endif // STRINGS_CONN_SYNAPSE22_H_