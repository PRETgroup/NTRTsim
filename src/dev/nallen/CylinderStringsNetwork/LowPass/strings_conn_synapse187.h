#ifndef STRINGS_CONN_SYNAPSE187_H_
#define STRINGS_CONN_SYNAPSE187_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse187 States
enum StringsConnSynapse187States {
    STRINGS_CONN_SYNAPSE187_L,
};

// strings_conn_synapse187 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse187States state;
} StringsConnSynapse187;

// strings_conn_synapse187 Initialisation function
void StringsConnSynapse187Init(StringsConnSynapse187* me);

// strings_conn_synapse187 Execution function
void StringsConnSynapse187Run(StringsConnSynapse187* me);

#endif // STRINGS_CONN_SYNAPSE187_H_