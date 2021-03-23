#ifndef STRINGS_CONN_SYNAPSE218_H_
#define STRINGS_CONN_SYNAPSE218_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse218 States
enum StringsConnSynapse218States {
    STRINGS_CONN_SYNAPSE218_L,
};

// strings_conn_synapse218 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse218States state;
} StringsConnSynapse218;

// strings_conn_synapse218 Initialisation function
void StringsConnSynapse218Init(StringsConnSynapse218* me);

// strings_conn_synapse218 Execution function
void StringsConnSynapse218Run(StringsConnSynapse218* me);

#endif // STRINGS_CONN_SYNAPSE218_H_