#ifndef STRINGS_CONN_SYNAPSE204_H_
#define STRINGS_CONN_SYNAPSE204_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse204 States
enum StringsConnSynapse204States {
    STRINGS_CONN_SYNAPSE204_L,
};

// strings_conn_synapse204 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse204States state;
} StringsConnSynapse204;

// strings_conn_synapse204 Initialisation function
void StringsConnSynapse204Init(StringsConnSynapse204* me);

// strings_conn_synapse204 Execution function
void StringsConnSynapse204Run(StringsConnSynapse204* me);

#endif // STRINGS_CONN_SYNAPSE204_H_