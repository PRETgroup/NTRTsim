#ifndef STRINGS_CONN_SYNAPSE158_H_
#define STRINGS_CONN_SYNAPSE158_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse158 States
enum StringsConnSynapse158States {
    STRINGS_CONN_SYNAPSE158_L,
};

// strings_conn_synapse158 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse158States state;
} StringsConnSynapse158;

// strings_conn_synapse158 Initialisation function
void StringsConnSynapse158Init(StringsConnSynapse158* me);

// strings_conn_synapse158 Execution function
void StringsConnSynapse158Run(StringsConnSynapse158* me);

#endif // STRINGS_CONN_SYNAPSE158_H_