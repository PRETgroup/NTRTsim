#ifndef STRINGS_CONN_SYNAPSE87_H_
#define STRINGS_CONN_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse87 States
enum StringsConnSynapse87States {
    STRINGS_CONN_SYNAPSE87_L,
};

// strings_conn_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse87States state;
} StringsConnSynapse87;

// strings_conn_synapse87 Initialisation function
void StringsConnSynapse87Init(StringsConnSynapse87* me);

// strings_conn_synapse87 Execution function
void StringsConnSynapse87Run(StringsConnSynapse87* me);

#endif // STRINGS_CONN_SYNAPSE87_H_