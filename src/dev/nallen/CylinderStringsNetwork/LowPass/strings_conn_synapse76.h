#ifndef STRINGS_CONN_SYNAPSE76_H_
#define STRINGS_CONN_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse76 States
enum StringsConnSynapse76States {
    STRINGS_CONN_SYNAPSE76_L,
};

// strings_conn_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse76States state;
} StringsConnSynapse76;

// strings_conn_synapse76 Initialisation function
void StringsConnSynapse76Init(StringsConnSynapse76* me);

// strings_conn_synapse76 Execution function
void StringsConnSynapse76Run(StringsConnSynapse76* me);

#endif // STRINGS_CONN_SYNAPSE76_H_