#ifndef STRINGS_CONN_SYNAPSE124_H_
#define STRINGS_CONN_SYNAPSE124_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse124 States
enum StringsConnSynapse124States {
    STRINGS_CONN_SYNAPSE124_L,
};

// strings_conn_synapse124 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse124States state;
} StringsConnSynapse124;

// strings_conn_synapse124 Initialisation function
void StringsConnSynapse124Init(StringsConnSynapse124* me);

// strings_conn_synapse124 Execution function
void StringsConnSynapse124Run(StringsConnSynapse124* me);

#endif // STRINGS_CONN_SYNAPSE124_H_