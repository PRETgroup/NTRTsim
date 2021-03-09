#ifndef STRINGS_CONN_SYNAPSE32_H_
#define STRINGS_CONN_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse32 States
enum StringsConnSynapse32States {
    STRINGS_CONN_SYNAPSE32_L,
};

// strings_conn_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse32States state;
} StringsConnSynapse32;

// strings_conn_synapse32 Initialisation function
void StringsConnSynapse32Init(StringsConnSynapse32* me);

// strings_conn_synapse32 Execution function
void StringsConnSynapse32Run(StringsConnSynapse32* me);

#endif // STRINGS_CONN_SYNAPSE32_H_