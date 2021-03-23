#ifndef STRINGS_CONN_SYNAPSE351_H_
#define STRINGS_CONN_SYNAPSE351_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse351 States
enum StringsConnSynapse351States {
    STRINGS_CONN_SYNAPSE351_L,
};

// strings_conn_synapse351 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse351States state;
} StringsConnSynapse351;

// strings_conn_synapse351 Initialisation function
void StringsConnSynapse351Init(StringsConnSynapse351* me);

// strings_conn_synapse351 Execution function
void StringsConnSynapse351Run(StringsConnSynapse351* me);

#endif // STRINGS_CONN_SYNAPSE351_H_