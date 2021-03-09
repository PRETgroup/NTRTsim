#ifndef STRINGS_CONN_SYNAPSE91_H_
#define STRINGS_CONN_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse91 States
enum StringsConnSynapse91States {
    STRINGS_CONN_SYNAPSE91_L,
};

// strings_conn_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse91States state;
} StringsConnSynapse91;

// strings_conn_synapse91 Initialisation function
void StringsConnSynapse91Init(StringsConnSynapse91* me);

// strings_conn_synapse91 Execution function
void StringsConnSynapse91Run(StringsConnSynapse91* me);

#endif // STRINGS_CONN_SYNAPSE91_H_