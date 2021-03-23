#ifndef STRINGS_CONN_SYNAPSE213_H_
#define STRINGS_CONN_SYNAPSE213_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse213 States
enum StringsConnSynapse213States {
    STRINGS_CONN_SYNAPSE213_L,
};

// strings_conn_synapse213 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse213States state;
} StringsConnSynapse213;

// strings_conn_synapse213 Initialisation function
void StringsConnSynapse213Init(StringsConnSynapse213* me);

// strings_conn_synapse213 Execution function
void StringsConnSynapse213Run(StringsConnSynapse213* me);

#endif // STRINGS_CONN_SYNAPSE213_H_