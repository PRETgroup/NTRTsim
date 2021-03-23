#ifndef STRINGS_CONN_SYNAPSE252_H_
#define STRINGS_CONN_SYNAPSE252_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse252 States
enum StringsConnSynapse252States {
    STRINGS_CONN_SYNAPSE252_L,
};

// strings_conn_synapse252 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse252States state;
} StringsConnSynapse252;

// strings_conn_synapse252 Initialisation function
void StringsConnSynapse252Init(StringsConnSynapse252* me);

// strings_conn_synapse252 Execution function
void StringsConnSynapse252Run(StringsConnSynapse252* me);

#endif // STRINGS_CONN_SYNAPSE252_H_