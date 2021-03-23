#ifndef STRINGS_CONN_SYNAPSE361_H_
#define STRINGS_CONN_SYNAPSE361_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse361 States
enum StringsConnSynapse361States {
    STRINGS_CONN_SYNAPSE361_L,
};

// strings_conn_synapse361 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse361States state;
} StringsConnSynapse361;

// strings_conn_synapse361 Initialisation function
void StringsConnSynapse361Init(StringsConnSynapse361* me);

// strings_conn_synapse361 Execution function
void StringsConnSynapse361Run(StringsConnSynapse361* me);

#endif // STRINGS_CONN_SYNAPSE361_H_