#ifndef STRINGS_CONN_SYNAPSE291_H_
#define STRINGS_CONN_SYNAPSE291_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse291 States
enum StringsConnSynapse291States {
    STRINGS_CONN_SYNAPSE291_L,
};

// strings_conn_synapse291 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse291States state;
} StringsConnSynapse291;

// strings_conn_synapse291 Initialisation function
void StringsConnSynapse291Init(StringsConnSynapse291* me);

// strings_conn_synapse291 Execution function
void StringsConnSynapse291Run(StringsConnSynapse291* me);

#endif // STRINGS_CONN_SYNAPSE291_H_