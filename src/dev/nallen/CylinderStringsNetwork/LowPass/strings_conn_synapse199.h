#ifndef STRINGS_CONN_SYNAPSE199_H_
#define STRINGS_CONN_SYNAPSE199_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse199 States
enum StringsConnSynapse199States {
    STRINGS_CONN_SYNAPSE199_L,
};

// strings_conn_synapse199 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse199States state;
} StringsConnSynapse199;

// strings_conn_synapse199 Initialisation function
void StringsConnSynapse199Init(StringsConnSynapse199* me);

// strings_conn_synapse199 Execution function
void StringsConnSynapse199Run(StringsConnSynapse199* me);

#endif // STRINGS_CONN_SYNAPSE199_H_