#ifndef STRINGS_CONN_SYNAPSE198_H_
#define STRINGS_CONN_SYNAPSE198_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse198 States
enum StringsConnSynapse198States {
    STRINGS_CONN_SYNAPSE198_L,
};

// strings_conn_synapse198 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse198States state;
} StringsConnSynapse198;

// strings_conn_synapse198 Initialisation function
void StringsConnSynapse198Init(StringsConnSynapse198* me);

// strings_conn_synapse198 Execution function
void StringsConnSynapse198Run(StringsConnSynapse198* me);

#endif // STRINGS_CONN_SYNAPSE198_H_