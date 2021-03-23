#ifndef STRINGS_CONN_SYNAPSE374_H_
#define STRINGS_CONN_SYNAPSE374_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse374 States
enum StringsConnSynapse374States {
    STRINGS_CONN_SYNAPSE374_L,
};

// strings_conn_synapse374 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse374States state;
} StringsConnSynapse374;

// strings_conn_synapse374 Initialisation function
void StringsConnSynapse374Init(StringsConnSynapse374* me);

// strings_conn_synapse374 Execution function
void StringsConnSynapse374Run(StringsConnSynapse374* me);

#endif // STRINGS_CONN_SYNAPSE374_H_