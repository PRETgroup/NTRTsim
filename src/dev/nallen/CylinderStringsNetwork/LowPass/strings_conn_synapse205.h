#ifndef STRINGS_CONN_SYNAPSE205_H_
#define STRINGS_CONN_SYNAPSE205_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse205 States
enum StringsConnSynapse205States {
    STRINGS_CONN_SYNAPSE205_L,
};

// strings_conn_synapse205 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse205States state;
} StringsConnSynapse205;

// strings_conn_synapse205 Initialisation function
void StringsConnSynapse205Init(StringsConnSynapse205* me);

// strings_conn_synapse205 Execution function
void StringsConnSynapse205Run(StringsConnSynapse205* me);

#endif // STRINGS_CONN_SYNAPSE205_H_