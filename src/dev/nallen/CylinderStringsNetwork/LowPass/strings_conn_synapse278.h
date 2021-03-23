#ifndef STRINGS_CONN_SYNAPSE278_H_
#define STRINGS_CONN_SYNAPSE278_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse278 States
enum StringsConnSynapse278States {
    STRINGS_CONN_SYNAPSE278_L,
};

// strings_conn_synapse278 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse278States state;
} StringsConnSynapse278;

// strings_conn_synapse278 Initialisation function
void StringsConnSynapse278Init(StringsConnSynapse278* me);

// strings_conn_synapse278 Execution function
void StringsConnSynapse278Run(StringsConnSynapse278* me);

#endif // STRINGS_CONN_SYNAPSE278_H_