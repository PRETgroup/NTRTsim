#ifndef STRINGS_CONN_SYNAPSE186_H_
#define STRINGS_CONN_SYNAPSE186_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse186 States
enum StringsConnSynapse186States {
    STRINGS_CONN_SYNAPSE186_L,
};

// strings_conn_synapse186 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse186States state;
} StringsConnSynapse186;

// strings_conn_synapse186 Initialisation function
void StringsConnSynapse186Init(StringsConnSynapse186* me);

// strings_conn_synapse186 Execution function
void StringsConnSynapse186Run(StringsConnSynapse186* me);

#endif // STRINGS_CONN_SYNAPSE186_H_