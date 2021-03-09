#ifndef STRINGS_CONN_SYNAPSE145_H_
#define STRINGS_CONN_SYNAPSE145_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse145 States
enum StringsConnSynapse145States {
    STRINGS_CONN_SYNAPSE145_L,
};

// strings_conn_synapse145 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse145States state;
} StringsConnSynapse145;

// strings_conn_synapse145 Initialisation function
void StringsConnSynapse145Init(StringsConnSynapse145* me);

// strings_conn_synapse145 Execution function
void StringsConnSynapse145Run(StringsConnSynapse145* me);

#endif // STRINGS_CONN_SYNAPSE145_H_