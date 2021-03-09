#ifndef STRINGS_CONN_SYNAPSE28_H_
#define STRINGS_CONN_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse28 States
enum StringsConnSynapse28States {
    STRINGS_CONN_SYNAPSE28_L,
};

// strings_conn_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse28States state;
} StringsConnSynapse28;

// strings_conn_synapse28 Initialisation function
void StringsConnSynapse28Init(StringsConnSynapse28* me);

// strings_conn_synapse28 Execution function
void StringsConnSynapse28Run(StringsConnSynapse28* me);

#endif // STRINGS_CONN_SYNAPSE28_H_