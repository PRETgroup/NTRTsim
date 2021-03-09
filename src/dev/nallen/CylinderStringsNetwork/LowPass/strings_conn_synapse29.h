#ifndef STRINGS_CONN_SYNAPSE29_H_
#define STRINGS_CONN_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse29 States
enum StringsConnSynapse29States {
    STRINGS_CONN_SYNAPSE29_L,
};

// strings_conn_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse29States state;
} StringsConnSynapse29;

// strings_conn_synapse29 Initialisation function
void StringsConnSynapse29Init(StringsConnSynapse29* me);

// strings_conn_synapse29 Execution function
void StringsConnSynapse29Run(StringsConnSynapse29* me);

#endif // STRINGS_CONN_SYNAPSE29_H_