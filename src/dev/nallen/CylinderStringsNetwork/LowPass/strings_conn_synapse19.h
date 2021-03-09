#ifndef STRINGS_CONN_SYNAPSE19_H_
#define STRINGS_CONN_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse19 States
enum StringsConnSynapse19States {
    STRINGS_CONN_SYNAPSE19_L,
};

// strings_conn_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse19States state;
} StringsConnSynapse19;

// strings_conn_synapse19 Initialisation function
void StringsConnSynapse19Init(StringsConnSynapse19* me);

// strings_conn_synapse19 Execution function
void StringsConnSynapse19Run(StringsConnSynapse19* me);

#endif // STRINGS_CONN_SYNAPSE19_H_