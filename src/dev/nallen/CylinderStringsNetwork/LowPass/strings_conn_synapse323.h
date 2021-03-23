#ifndef STRINGS_CONN_SYNAPSE323_H_
#define STRINGS_CONN_SYNAPSE323_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse323 States
enum StringsConnSynapse323States {
    STRINGS_CONN_SYNAPSE323_L,
};

// strings_conn_synapse323 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse323States state;
} StringsConnSynapse323;

// strings_conn_synapse323 Initialisation function
void StringsConnSynapse323Init(StringsConnSynapse323* me);

// strings_conn_synapse323 Execution function
void StringsConnSynapse323Run(StringsConnSynapse323* me);

#endif // STRINGS_CONN_SYNAPSE323_H_