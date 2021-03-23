#ifndef STRINGS_CONN_SYNAPSE274_H_
#define STRINGS_CONN_SYNAPSE274_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse274 States
enum StringsConnSynapse274States {
    STRINGS_CONN_SYNAPSE274_L,
};

// strings_conn_synapse274 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse274States state;
} StringsConnSynapse274;

// strings_conn_synapse274 Initialisation function
void StringsConnSynapse274Init(StringsConnSynapse274* me);

// strings_conn_synapse274 Execution function
void StringsConnSynapse274Run(StringsConnSynapse274* me);

#endif // STRINGS_CONN_SYNAPSE274_H_