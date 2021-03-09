#ifndef STRINGS_CONN_SYNAPSE83_H_
#define STRINGS_CONN_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse83 States
enum StringsConnSynapse83States {
    STRINGS_CONN_SYNAPSE83_L,
};

// strings_conn_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse83States state;
} StringsConnSynapse83;

// strings_conn_synapse83 Initialisation function
void StringsConnSynapse83Init(StringsConnSynapse83* me);

// strings_conn_synapse83 Execution function
void StringsConnSynapse83Run(StringsConnSynapse83* me);

#endif // STRINGS_CONN_SYNAPSE83_H_