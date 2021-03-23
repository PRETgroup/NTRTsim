#ifndef STRINGS_CONN_SYNAPSE362_H_
#define STRINGS_CONN_SYNAPSE362_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse362 States
enum StringsConnSynapse362States {
    STRINGS_CONN_SYNAPSE362_L,
};

// strings_conn_synapse362 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse362States state;
} StringsConnSynapse362;

// strings_conn_synapse362 Initialisation function
void StringsConnSynapse362Init(StringsConnSynapse362* me);

// strings_conn_synapse362 Execution function
void StringsConnSynapse362Run(StringsConnSynapse362* me);

#endif // STRINGS_CONN_SYNAPSE362_H_