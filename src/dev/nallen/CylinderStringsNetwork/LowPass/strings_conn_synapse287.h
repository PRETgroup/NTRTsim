#ifndef STRINGS_CONN_SYNAPSE287_H_
#define STRINGS_CONN_SYNAPSE287_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse287 States
enum StringsConnSynapse287States {
    STRINGS_CONN_SYNAPSE287_L,
};

// strings_conn_synapse287 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse287States state;
} StringsConnSynapse287;

// strings_conn_synapse287 Initialisation function
void StringsConnSynapse287Init(StringsConnSynapse287* me);

// strings_conn_synapse287 Execution function
void StringsConnSynapse287Run(StringsConnSynapse287* me);

#endif // STRINGS_CONN_SYNAPSE287_H_