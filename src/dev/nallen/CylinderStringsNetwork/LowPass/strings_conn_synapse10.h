#ifndef STRINGS_CONN_SYNAPSE10_H_
#define STRINGS_CONN_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse10 States
enum StringsConnSynapse10States {
    STRINGS_CONN_SYNAPSE10_L,
};

// strings_conn_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse10States state;
} StringsConnSynapse10;

// strings_conn_synapse10 Initialisation function
void StringsConnSynapse10Init(StringsConnSynapse10* me);

// strings_conn_synapse10 Execution function
void StringsConnSynapse10Run(StringsConnSynapse10* me);

#endif // STRINGS_CONN_SYNAPSE10_H_