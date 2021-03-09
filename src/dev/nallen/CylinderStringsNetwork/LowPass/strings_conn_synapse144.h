#ifndef STRINGS_CONN_SYNAPSE144_H_
#define STRINGS_CONN_SYNAPSE144_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse144 States
enum StringsConnSynapse144States {
    STRINGS_CONN_SYNAPSE144_L,
};

// strings_conn_synapse144 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse144States state;
} StringsConnSynapse144;

// strings_conn_synapse144 Initialisation function
void StringsConnSynapse144Init(StringsConnSynapse144* me);

// strings_conn_synapse144 Execution function
void StringsConnSynapse144Run(StringsConnSynapse144* me);

#endif // STRINGS_CONN_SYNAPSE144_H_