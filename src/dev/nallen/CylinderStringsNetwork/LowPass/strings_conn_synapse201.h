#ifndef STRINGS_CONN_SYNAPSE201_H_
#define STRINGS_CONN_SYNAPSE201_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse201 States
enum StringsConnSynapse201States {
    STRINGS_CONN_SYNAPSE201_L,
};

// strings_conn_synapse201 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse201States state;
} StringsConnSynapse201;

// strings_conn_synapse201 Initialisation function
void StringsConnSynapse201Init(StringsConnSynapse201* me);

// strings_conn_synapse201 Execution function
void StringsConnSynapse201Run(StringsConnSynapse201* me);

#endif // STRINGS_CONN_SYNAPSE201_H_