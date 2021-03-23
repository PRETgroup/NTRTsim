#ifndef STRINGS_CONN_SYNAPSE364_H_
#define STRINGS_CONN_SYNAPSE364_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse364 States
enum StringsConnSynapse364States {
    STRINGS_CONN_SYNAPSE364_L,
};

// strings_conn_synapse364 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse364States state;
} StringsConnSynapse364;

// strings_conn_synapse364 Initialisation function
void StringsConnSynapse364Init(StringsConnSynapse364* me);

// strings_conn_synapse364 Execution function
void StringsConnSynapse364Run(StringsConnSynapse364* me);

#endif // STRINGS_CONN_SYNAPSE364_H_