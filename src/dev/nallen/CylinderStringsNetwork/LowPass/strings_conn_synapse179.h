#ifndef STRINGS_CONN_SYNAPSE179_H_
#define STRINGS_CONN_SYNAPSE179_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse179 States
enum StringsConnSynapse179States {
    STRINGS_CONN_SYNAPSE179_L,
};

// strings_conn_synapse179 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse179States state;
} StringsConnSynapse179;

// strings_conn_synapse179 Initialisation function
void StringsConnSynapse179Init(StringsConnSynapse179* me);

// strings_conn_synapse179 Execution function
void StringsConnSynapse179Run(StringsConnSynapse179* me);

#endif // STRINGS_CONN_SYNAPSE179_H_