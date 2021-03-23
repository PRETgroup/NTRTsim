#ifndef STRINGS_CONN_SYNAPSE235_H_
#define STRINGS_CONN_SYNAPSE235_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse235 States
enum StringsConnSynapse235States {
    STRINGS_CONN_SYNAPSE235_L,
};

// strings_conn_synapse235 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse235States state;
} StringsConnSynapse235;

// strings_conn_synapse235 Initialisation function
void StringsConnSynapse235Init(StringsConnSynapse235* me);

// strings_conn_synapse235 Execution function
void StringsConnSynapse235Run(StringsConnSynapse235* me);

#endif // STRINGS_CONN_SYNAPSE235_H_