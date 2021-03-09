#ifndef STRINGS_CONN_SYNAPSE167_H_
#define STRINGS_CONN_SYNAPSE167_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse167 States
enum StringsConnSynapse167States {
    STRINGS_CONN_SYNAPSE167_L,
};

// strings_conn_synapse167 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse167States state;
} StringsConnSynapse167;

// strings_conn_synapse167 Initialisation function
void StringsConnSynapse167Init(StringsConnSynapse167* me);

// strings_conn_synapse167 Execution function
void StringsConnSynapse167Run(StringsConnSynapse167* me);

#endif // STRINGS_CONN_SYNAPSE167_H_