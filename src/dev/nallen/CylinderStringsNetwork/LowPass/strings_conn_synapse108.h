#ifndef STRINGS_CONN_SYNAPSE108_H_
#define STRINGS_CONN_SYNAPSE108_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse108 States
enum StringsConnSynapse108States {
    STRINGS_CONN_SYNAPSE108_L,
};

// strings_conn_synapse108 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse108States state;
} StringsConnSynapse108;

// strings_conn_synapse108 Initialisation function
void StringsConnSynapse108Init(StringsConnSynapse108* me);

// strings_conn_synapse108 Execution function
void StringsConnSynapse108Run(StringsConnSynapse108* me);

#endif // STRINGS_CONN_SYNAPSE108_H_