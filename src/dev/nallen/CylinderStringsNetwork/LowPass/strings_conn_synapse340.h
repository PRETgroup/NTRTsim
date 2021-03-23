#ifndef STRINGS_CONN_SYNAPSE340_H_
#define STRINGS_CONN_SYNAPSE340_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse340 States
enum StringsConnSynapse340States {
    STRINGS_CONN_SYNAPSE340_L,
};

// strings_conn_synapse340 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse340States state;
} StringsConnSynapse340;

// strings_conn_synapse340 Initialisation function
void StringsConnSynapse340Init(StringsConnSynapse340* me);

// strings_conn_synapse340 Execution function
void StringsConnSynapse340Run(StringsConnSynapse340* me);

#endif // STRINGS_CONN_SYNAPSE340_H_