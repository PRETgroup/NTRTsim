#ifndef STRINGS_CONN_SYNAPSE269_H_
#define STRINGS_CONN_SYNAPSE269_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse269 States
enum StringsConnSynapse269States {
    STRINGS_CONN_SYNAPSE269_L,
};

// strings_conn_synapse269 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse269States state;
} StringsConnSynapse269;

// strings_conn_synapse269 Initialisation function
void StringsConnSynapse269Init(StringsConnSynapse269* me);

// strings_conn_synapse269 Execution function
void StringsConnSynapse269Run(StringsConnSynapse269* me);

#endif // STRINGS_CONN_SYNAPSE269_H_