#ifndef STRINGS_CONN_SYNAPSE254_H_
#define STRINGS_CONN_SYNAPSE254_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse254 States
enum StringsConnSynapse254States {
    STRINGS_CONN_SYNAPSE254_L,
};

// strings_conn_synapse254 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse254States state;
} StringsConnSynapse254;

// strings_conn_synapse254 Initialisation function
void StringsConnSynapse254Init(StringsConnSynapse254* me);

// strings_conn_synapse254 Execution function
void StringsConnSynapse254Run(StringsConnSynapse254* me);

#endif // STRINGS_CONN_SYNAPSE254_H_