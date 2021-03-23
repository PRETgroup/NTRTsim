#ifndef STRINGS_CONN_SYNAPSE225_H_
#define STRINGS_CONN_SYNAPSE225_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse225 States
enum StringsConnSynapse225States {
    STRINGS_CONN_SYNAPSE225_L,
};

// strings_conn_synapse225 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse225States state;
} StringsConnSynapse225;

// strings_conn_synapse225 Initialisation function
void StringsConnSynapse225Init(StringsConnSynapse225* me);

// strings_conn_synapse225 Execution function
void StringsConnSynapse225Run(StringsConnSynapse225* me);

#endif // STRINGS_CONN_SYNAPSE225_H_