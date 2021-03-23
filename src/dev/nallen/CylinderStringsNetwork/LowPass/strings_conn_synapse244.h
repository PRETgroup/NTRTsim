#ifndef STRINGS_CONN_SYNAPSE244_H_
#define STRINGS_CONN_SYNAPSE244_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse244 States
enum StringsConnSynapse244States {
    STRINGS_CONN_SYNAPSE244_L,
};

// strings_conn_synapse244 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse244States state;
} StringsConnSynapse244;

// strings_conn_synapse244 Initialisation function
void StringsConnSynapse244Init(StringsConnSynapse244* me);

// strings_conn_synapse244 Execution function
void StringsConnSynapse244Run(StringsConnSynapse244* me);

#endif // STRINGS_CONN_SYNAPSE244_H_