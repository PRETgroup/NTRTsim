#ifndef STRINGS_CONN_SYNAPSE148_H_
#define STRINGS_CONN_SYNAPSE148_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse148 States
enum StringsConnSynapse148States {
    STRINGS_CONN_SYNAPSE148_L,
};

// strings_conn_synapse148 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse148States state;
} StringsConnSynapse148;

// strings_conn_synapse148 Initialisation function
void StringsConnSynapse148Init(StringsConnSynapse148* me);

// strings_conn_synapse148 Execution function
void StringsConnSynapse148Run(StringsConnSynapse148* me);

#endif // STRINGS_CONN_SYNAPSE148_H_