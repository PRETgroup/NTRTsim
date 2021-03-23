#ifndef STRINGS_CONN_SYNAPSE216_H_
#define STRINGS_CONN_SYNAPSE216_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse216 States
enum StringsConnSynapse216States {
    STRINGS_CONN_SYNAPSE216_L,
};

// strings_conn_synapse216 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse216States state;
} StringsConnSynapse216;

// strings_conn_synapse216 Initialisation function
void StringsConnSynapse216Init(StringsConnSynapse216* me);

// strings_conn_synapse216 Execution function
void StringsConnSynapse216Run(StringsConnSynapse216* me);

#endif // STRINGS_CONN_SYNAPSE216_H_