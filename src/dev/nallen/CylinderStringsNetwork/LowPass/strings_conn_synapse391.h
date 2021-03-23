#ifndef STRINGS_CONN_SYNAPSE391_H_
#define STRINGS_CONN_SYNAPSE391_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse391 States
enum StringsConnSynapse391States {
    STRINGS_CONN_SYNAPSE391_L,
};

// strings_conn_synapse391 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse391States state;
} StringsConnSynapse391;

// strings_conn_synapse391 Initialisation function
void StringsConnSynapse391Init(StringsConnSynapse391* me);

// strings_conn_synapse391 Execution function
void StringsConnSynapse391Run(StringsConnSynapse391* me);

#endif // STRINGS_CONN_SYNAPSE391_H_