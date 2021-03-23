#ifndef STRINGS_CONN_SYNAPSE248_H_
#define STRINGS_CONN_SYNAPSE248_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse248 States
enum StringsConnSynapse248States {
    STRINGS_CONN_SYNAPSE248_L,
};

// strings_conn_synapse248 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse248States state;
} StringsConnSynapse248;

// strings_conn_synapse248 Initialisation function
void StringsConnSynapse248Init(StringsConnSynapse248* me);

// strings_conn_synapse248 Execution function
void StringsConnSynapse248Run(StringsConnSynapse248* me);

#endif // STRINGS_CONN_SYNAPSE248_H_