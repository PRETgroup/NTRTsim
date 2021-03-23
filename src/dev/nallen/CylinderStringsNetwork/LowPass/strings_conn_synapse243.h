#ifndef STRINGS_CONN_SYNAPSE243_H_
#define STRINGS_CONN_SYNAPSE243_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse243 States
enum StringsConnSynapse243States {
    STRINGS_CONN_SYNAPSE243_L,
};

// strings_conn_synapse243 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse243States state;
} StringsConnSynapse243;

// strings_conn_synapse243 Initialisation function
void StringsConnSynapse243Init(StringsConnSynapse243* me);

// strings_conn_synapse243 Execution function
void StringsConnSynapse243Run(StringsConnSynapse243* me);

#endif // STRINGS_CONN_SYNAPSE243_H_