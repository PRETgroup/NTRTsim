#ifndef STRINGS_CONN_SYNAPSE61_H_
#define STRINGS_CONN_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse61 States
enum StringsConnSynapse61States {
    STRINGS_CONN_SYNAPSE61_L,
};

// strings_conn_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse61States state;
} StringsConnSynapse61;

// strings_conn_synapse61 Initialisation function
void StringsConnSynapse61Init(StringsConnSynapse61* me);

// strings_conn_synapse61 Execution function
void StringsConnSynapse61Run(StringsConnSynapse61* me);

#endif // STRINGS_CONN_SYNAPSE61_H_