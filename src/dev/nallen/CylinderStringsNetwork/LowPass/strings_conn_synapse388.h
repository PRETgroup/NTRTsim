#ifndef STRINGS_CONN_SYNAPSE388_H_
#define STRINGS_CONN_SYNAPSE388_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse388 States
enum StringsConnSynapse388States {
    STRINGS_CONN_SYNAPSE388_L,
};

// strings_conn_synapse388 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse388States state;
} StringsConnSynapse388;

// strings_conn_synapse388 Initialisation function
void StringsConnSynapse388Init(StringsConnSynapse388* me);

// strings_conn_synapse388 Execution function
void StringsConnSynapse388Run(StringsConnSynapse388* me);

#endif // STRINGS_CONN_SYNAPSE388_H_