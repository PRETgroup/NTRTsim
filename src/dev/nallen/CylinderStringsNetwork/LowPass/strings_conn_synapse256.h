#ifndef STRINGS_CONN_SYNAPSE256_H_
#define STRINGS_CONN_SYNAPSE256_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse256 States
enum StringsConnSynapse256States {
    STRINGS_CONN_SYNAPSE256_L,
};

// strings_conn_synapse256 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse256States state;
} StringsConnSynapse256;

// strings_conn_synapse256 Initialisation function
void StringsConnSynapse256Init(StringsConnSynapse256* me);

// strings_conn_synapse256 Execution function
void StringsConnSynapse256Run(StringsConnSynapse256* me);

#endif // STRINGS_CONN_SYNAPSE256_H_