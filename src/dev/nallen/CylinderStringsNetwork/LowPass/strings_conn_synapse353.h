#ifndef STRINGS_CONN_SYNAPSE353_H_
#define STRINGS_CONN_SYNAPSE353_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse353 States
enum StringsConnSynapse353States {
    STRINGS_CONN_SYNAPSE353_L,
};

// strings_conn_synapse353 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse353States state;
} StringsConnSynapse353;

// strings_conn_synapse353 Initialisation function
void StringsConnSynapse353Init(StringsConnSynapse353* me);

// strings_conn_synapse353 Execution function
void StringsConnSynapse353Run(StringsConnSynapse353* me);

#endif // STRINGS_CONN_SYNAPSE353_H_