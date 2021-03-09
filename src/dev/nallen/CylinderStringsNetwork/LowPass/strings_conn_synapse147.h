#ifndef STRINGS_CONN_SYNAPSE147_H_
#define STRINGS_CONN_SYNAPSE147_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse147 States
enum StringsConnSynapse147States {
    STRINGS_CONN_SYNAPSE147_L,
};

// strings_conn_synapse147 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse147States state;
} StringsConnSynapse147;

// strings_conn_synapse147 Initialisation function
void StringsConnSynapse147Init(StringsConnSynapse147* me);

// strings_conn_synapse147 Execution function
void StringsConnSynapse147Run(StringsConnSynapse147* me);

#endif // STRINGS_CONN_SYNAPSE147_H_