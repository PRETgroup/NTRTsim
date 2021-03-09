#ifndef STRINGS_CONN_SYNAPSE189_H_
#define STRINGS_CONN_SYNAPSE189_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse189 States
enum StringsConnSynapse189States {
    STRINGS_CONN_SYNAPSE189_L,
};

// strings_conn_synapse189 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse189States state;
} StringsConnSynapse189;

// strings_conn_synapse189 Initialisation function
void StringsConnSynapse189Init(StringsConnSynapse189* me);

// strings_conn_synapse189 Execution function
void StringsConnSynapse189Run(StringsConnSynapse189* me);

#endif // STRINGS_CONN_SYNAPSE189_H_