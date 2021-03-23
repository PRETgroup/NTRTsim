#ifndef STRINGS_CONN_SYNAPSE262_H_
#define STRINGS_CONN_SYNAPSE262_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse262 States
enum StringsConnSynapse262States {
    STRINGS_CONN_SYNAPSE262_L,
};

// strings_conn_synapse262 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse262States state;
} StringsConnSynapse262;

// strings_conn_synapse262 Initialisation function
void StringsConnSynapse262Init(StringsConnSynapse262* me);

// strings_conn_synapse262 Execution function
void StringsConnSynapse262Run(StringsConnSynapse262* me);

#endif // STRINGS_CONN_SYNAPSE262_H_