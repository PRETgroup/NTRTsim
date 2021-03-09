#ifndef STRINGS_CONN_SYNAPSE155_H_
#define STRINGS_CONN_SYNAPSE155_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse155 States
enum StringsConnSynapse155States {
    STRINGS_CONN_SYNAPSE155_L,
};

// strings_conn_synapse155 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse155States state;
} StringsConnSynapse155;

// strings_conn_synapse155 Initialisation function
void StringsConnSynapse155Init(StringsConnSynapse155* me);

// strings_conn_synapse155 Execution function
void StringsConnSynapse155Run(StringsConnSynapse155* me);

#endif // STRINGS_CONN_SYNAPSE155_H_