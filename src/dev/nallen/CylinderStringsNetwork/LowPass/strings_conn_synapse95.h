#ifndef STRINGS_CONN_SYNAPSE95_H_
#define STRINGS_CONN_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse95 States
enum StringsConnSynapse95States {
    STRINGS_CONN_SYNAPSE95_L,
};

// strings_conn_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse95States state;
} StringsConnSynapse95;

// strings_conn_synapse95 Initialisation function
void StringsConnSynapse95Init(StringsConnSynapse95* me);

// strings_conn_synapse95 Execution function
void StringsConnSynapse95Run(StringsConnSynapse95* me);

#endif // STRINGS_CONN_SYNAPSE95_H_