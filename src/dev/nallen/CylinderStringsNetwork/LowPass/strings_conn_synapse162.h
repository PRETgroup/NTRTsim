#ifndef STRINGS_CONN_SYNAPSE162_H_
#define STRINGS_CONN_SYNAPSE162_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse162 States
enum StringsConnSynapse162States {
    STRINGS_CONN_SYNAPSE162_L,
};

// strings_conn_synapse162 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse162States state;
} StringsConnSynapse162;

// strings_conn_synapse162 Initialisation function
void StringsConnSynapse162Init(StringsConnSynapse162* me);

// strings_conn_synapse162 Execution function
void StringsConnSynapse162Run(StringsConnSynapse162* me);

#endif // STRINGS_CONN_SYNAPSE162_H_