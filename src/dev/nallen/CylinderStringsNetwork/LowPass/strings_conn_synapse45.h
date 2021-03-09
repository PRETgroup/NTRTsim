#ifndef STRINGS_CONN_SYNAPSE45_H_
#define STRINGS_CONN_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse45 States
enum StringsConnSynapse45States {
    STRINGS_CONN_SYNAPSE45_L,
};

// strings_conn_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse45States state;
} StringsConnSynapse45;

// strings_conn_synapse45 Initialisation function
void StringsConnSynapse45Init(StringsConnSynapse45* me);

// strings_conn_synapse45 Execution function
void StringsConnSynapse45Run(StringsConnSynapse45* me);

#endif // STRINGS_CONN_SYNAPSE45_H_