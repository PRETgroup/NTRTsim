#ifndef STRINGS_CONN_SYNAPSE118_H_
#define STRINGS_CONN_SYNAPSE118_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse118 States
enum StringsConnSynapse118States {
    STRINGS_CONN_SYNAPSE118_L,
};

// strings_conn_synapse118 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse118States state;
} StringsConnSynapse118;

// strings_conn_synapse118 Initialisation function
void StringsConnSynapse118Init(StringsConnSynapse118* me);

// strings_conn_synapse118 Execution function
void StringsConnSynapse118Run(StringsConnSynapse118* me);

#endif // STRINGS_CONN_SYNAPSE118_H_