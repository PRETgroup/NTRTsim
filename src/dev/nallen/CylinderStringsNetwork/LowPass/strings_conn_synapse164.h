#ifndef STRINGS_CONN_SYNAPSE164_H_
#define STRINGS_CONN_SYNAPSE164_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse164 States
enum StringsConnSynapse164States {
    STRINGS_CONN_SYNAPSE164_L,
};

// strings_conn_synapse164 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse164States state;
} StringsConnSynapse164;

// strings_conn_synapse164 Initialisation function
void StringsConnSynapse164Init(StringsConnSynapse164* me);

// strings_conn_synapse164 Execution function
void StringsConnSynapse164Run(StringsConnSynapse164* me);

#endif // STRINGS_CONN_SYNAPSE164_H_