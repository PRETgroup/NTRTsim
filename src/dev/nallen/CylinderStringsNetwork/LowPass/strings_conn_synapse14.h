#ifndef STRINGS_CONN_SYNAPSE14_H_
#define STRINGS_CONN_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse14 States
enum StringsConnSynapse14States {
    STRINGS_CONN_SYNAPSE14_L,
};

// strings_conn_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse14States state;
} StringsConnSynapse14;

// strings_conn_synapse14 Initialisation function
void StringsConnSynapse14Init(StringsConnSynapse14* me);

// strings_conn_synapse14 Execution function
void StringsConnSynapse14Run(StringsConnSynapse14* me);

#endif // STRINGS_CONN_SYNAPSE14_H_