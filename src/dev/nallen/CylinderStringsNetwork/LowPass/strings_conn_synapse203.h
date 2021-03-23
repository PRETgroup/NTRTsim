#ifndef STRINGS_CONN_SYNAPSE203_H_
#define STRINGS_CONN_SYNAPSE203_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse203 States
enum StringsConnSynapse203States {
    STRINGS_CONN_SYNAPSE203_L,
};

// strings_conn_synapse203 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse203States state;
} StringsConnSynapse203;

// strings_conn_synapse203 Initialisation function
void StringsConnSynapse203Init(StringsConnSynapse203* me);

// strings_conn_synapse203 Execution function
void StringsConnSynapse203Run(StringsConnSynapse203* me);

#endif // STRINGS_CONN_SYNAPSE203_H_