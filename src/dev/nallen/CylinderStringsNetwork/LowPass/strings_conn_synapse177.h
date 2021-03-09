#ifndef STRINGS_CONN_SYNAPSE177_H_
#define STRINGS_CONN_SYNAPSE177_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse177 States
enum StringsConnSynapse177States {
    STRINGS_CONN_SYNAPSE177_L,
};

// strings_conn_synapse177 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse177States state;
} StringsConnSynapse177;

// strings_conn_synapse177 Initialisation function
void StringsConnSynapse177Init(StringsConnSynapse177* me);

// strings_conn_synapse177 Execution function
void StringsConnSynapse177Run(StringsConnSynapse177* me);

#endif // STRINGS_CONN_SYNAPSE177_H_