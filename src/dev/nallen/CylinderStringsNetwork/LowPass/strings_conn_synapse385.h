#ifndef STRINGS_CONN_SYNAPSE385_H_
#define STRINGS_CONN_SYNAPSE385_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse385 States
enum StringsConnSynapse385States {
    STRINGS_CONN_SYNAPSE385_L,
};

// strings_conn_synapse385 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse385States state;
} StringsConnSynapse385;

// strings_conn_synapse385 Initialisation function
void StringsConnSynapse385Init(StringsConnSynapse385* me);

// strings_conn_synapse385 Execution function
void StringsConnSynapse385Run(StringsConnSynapse385* me);

#endif // STRINGS_CONN_SYNAPSE385_H_