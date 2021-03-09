#ifndef STRINGS_CONN_SYNAPSE68_H_
#define STRINGS_CONN_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse68 States
enum StringsConnSynapse68States {
    STRINGS_CONN_SYNAPSE68_L,
};

// strings_conn_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse68States state;
} StringsConnSynapse68;

// strings_conn_synapse68 Initialisation function
void StringsConnSynapse68Init(StringsConnSynapse68* me);

// strings_conn_synapse68 Execution function
void StringsConnSynapse68Run(StringsConnSynapse68* me);

#endif // STRINGS_CONN_SYNAPSE68_H_