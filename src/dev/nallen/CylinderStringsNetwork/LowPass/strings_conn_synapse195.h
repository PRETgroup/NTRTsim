#ifndef STRINGS_CONN_SYNAPSE195_H_
#define STRINGS_CONN_SYNAPSE195_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse195 States
enum StringsConnSynapse195States {
    STRINGS_CONN_SYNAPSE195_L,
};

// strings_conn_synapse195 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse195States state;
} StringsConnSynapse195;

// strings_conn_synapse195 Initialisation function
void StringsConnSynapse195Init(StringsConnSynapse195* me);

// strings_conn_synapse195 Execution function
void StringsConnSynapse195Run(StringsConnSynapse195* me);

#endif // STRINGS_CONN_SYNAPSE195_H_