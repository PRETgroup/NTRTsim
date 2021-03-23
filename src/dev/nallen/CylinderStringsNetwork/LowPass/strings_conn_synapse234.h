#ifndef STRINGS_CONN_SYNAPSE234_H_
#define STRINGS_CONN_SYNAPSE234_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse234 States
enum StringsConnSynapse234States {
    STRINGS_CONN_SYNAPSE234_L,
};

// strings_conn_synapse234 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse234States state;
} StringsConnSynapse234;

// strings_conn_synapse234 Initialisation function
void StringsConnSynapse234Init(StringsConnSynapse234* me);

// strings_conn_synapse234 Execution function
void StringsConnSynapse234Run(StringsConnSynapse234* me);

#endif // STRINGS_CONN_SYNAPSE234_H_