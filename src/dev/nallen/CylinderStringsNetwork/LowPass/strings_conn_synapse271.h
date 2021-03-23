#ifndef STRINGS_CONN_SYNAPSE271_H_
#define STRINGS_CONN_SYNAPSE271_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse271 States
enum StringsConnSynapse271States {
    STRINGS_CONN_SYNAPSE271_L,
};

// strings_conn_synapse271 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse271States state;
} StringsConnSynapse271;

// strings_conn_synapse271 Initialisation function
void StringsConnSynapse271Init(StringsConnSynapse271* me);

// strings_conn_synapse271 Execution function
void StringsConnSynapse271Run(StringsConnSynapse271* me);

#endif // STRINGS_CONN_SYNAPSE271_H_