#ifndef STRINGS_CONN_SYNAPSE59_H_
#define STRINGS_CONN_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse59 States
enum StringsConnSynapse59States {
    STRINGS_CONN_SYNAPSE59_L,
};

// strings_conn_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse59States state;
} StringsConnSynapse59;

// strings_conn_synapse59 Initialisation function
void StringsConnSynapse59Init(StringsConnSynapse59* me);

// strings_conn_synapse59 Execution function
void StringsConnSynapse59Run(StringsConnSynapse59* me);

#endif // STRINGS_CONN_SYNAPSE59_H_