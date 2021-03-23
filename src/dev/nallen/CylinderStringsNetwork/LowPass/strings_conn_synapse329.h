#ifndef STRINGS_CONN_SYNAPSE329_H_
#define STRINGS_CONN_SYNAPSE329_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse329 States
enum StringsConnSynapse329States {
    STRINGS_CONN_SYNAPSE329_L,
};

// strings_conn_synapse329 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse329States state;
} StringsConnSynapse329;

// strings_conn_synapse329 Initialisation function
void StringsConnSynapse329Init(StringsConnSynapse329* me);

// strings_conn_synapse329 Execution function
void StringsConnSynapse329Run(StringsConnSynapse329* me);

#endif // STRINGS_CONN_SYNAPSE329_H_