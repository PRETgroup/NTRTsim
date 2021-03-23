#ifndef STRINGS_CONN_SYNAPSE369_H_
#define STRINGS_CONN_SYNAPSE369_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse369 States
enum StringsConnSynapse369States {
    STRINGS_CONN_SYNAPSE369_L,
};

// strings_conn_synapse369 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse369States state;
} StringsConnSynapse369;

// strings_conn_synapse369 Initialisation function
void StringsConnSynapse369Init(StringsConnSynapse369* me);

// strings_conn_synapse369 Execution function
void StringsConnSynapse369Run(StringsConnSynapse369* me);

#endif // STRINGS_CONN_SYNAPSE369_H_