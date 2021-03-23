#ifndef STRINGS_CONN_SYNAPSE360_H_
#define STRINGS_CONN_SYNAPSE360_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse360 States
enum StringsConnSynapse360States {
    STRINGS_CONN_SYNAPSE360_L,
};

// strings_conn_synapse360 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse360States state;
} StringsConnSynapse360;

// strings_conn_synapse360 Initialisation function
void StringsConnSynapse360Init(StringsConnSynapse360* me);

// strings_conn_synapse360 Execution function
void StringsConnSynapse360Run(StringsConnSynapse360* me);

#endif // STRINGS_CONN_SYNAPSE360_H_