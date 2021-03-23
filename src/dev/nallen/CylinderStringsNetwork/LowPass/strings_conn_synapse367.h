#ifndef STRINGS_CONN_SYNAPSE367_H_
#define STRINGS_CONN_SYNAPSE367_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse367 States
enum StringsConnSynapse367States {
    STRINGS_CONN_SYNAPSE367_L,
};

// strings_conn_synapse367 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse367States state;
} StringsConnSynapse367;

// strings_conn_synapse367 Initialisation function
void StringsConnSynapse367Init(StringsConnSynapse367* me);

// strings_conn_synapse367 Execution function
void StringsConnSynapse367Run(StringsConnSynapse367* me);

#endif // STRINGS_CONN_SYNAPSE367_H_