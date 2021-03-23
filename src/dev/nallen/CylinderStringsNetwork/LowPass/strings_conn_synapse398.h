#ifndef STRINGS_CONN_SYNAPSE398_H_
#define STRINGS_CONN_SYNAPSE398_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse398 States
enum StringsConnSynapse398States {
    STRINGS_CONN_SYNAPSE398_L,
};

// strings_conn_synapse398 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse398States state;
} StringsConnSynapse398;

// strings_conn_synapse398 Initialisation function
void StringsConnSynapse398Init(StringsConnSynapse398* me);

// strings_conn_synapse398 Execution function
void StringsConnSynapse398Run(StringsConnSynapse398* me);

#endif // STRINGS_CONN_SYNAPSE398_H_