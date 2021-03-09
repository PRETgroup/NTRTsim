#ifndef STRINGS_CONN_SYNAPSE81_H_
#define STRINGS_CONN_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse81 States
enum StringsConnSynapse81States {
    STRINGS_CONN_SYNAPSE81_L,
};

// strings_conn_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse81States state;
} StringsConnSynapse81;

// strings_conn_synapse81 Initialisation function
void StringsConnSynapse81Init(StringsConnSynapse81* me);

// strings_conn_synapse81 Execution function
void StringsConnSynapse81Run(StringsConnSynapse81* me);

#endif // STRINGS_CONN_SYNAPSE81_H_