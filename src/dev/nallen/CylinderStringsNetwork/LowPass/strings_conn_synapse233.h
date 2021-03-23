#ifndef STRINGS_CONN_SYNAPSE233_H_
#define STRINGS_CONN_SYNAPSE233_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse233 States
enum StringsConnSynapse233States {
    STRINGS_CONN_SYNAPSE233_L,
};

// strings_conn_synapse233 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse233States state;
} StringsConnSynapse233;

// strings_conn_synapse233 Initialisation function
void StringsConnSynapse233Init(StringsConnSynapse233* me);

// strings_conn_synapse233 Execution function
void StringsConnSynapse233Run(StringsConnSynapse233* me);

#endif // STRINGS_CONN_SYNAPSE233_H_