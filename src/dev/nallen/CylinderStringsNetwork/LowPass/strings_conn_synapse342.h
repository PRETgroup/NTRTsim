#ifndef STRINGS_CONN_SYNAPSE342_H_
#define STRINGS_CONN_SYNAPSE342_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse342 States
enum StringsConnSynapse342States {
    STRINGS_CONN_SYNAPSE342_L,
};

// strings_conn_synapse342 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse342States state;
} StringsConnSynapse342;

// strings_conn_synapse342 Initialisation function
void StringsConnSynapse342Init(StringsConnSynapse342* me);

// strings_conn_synapse342 Execution function
void StringsConnSynapse342Run(StringsConnSynapse342* me);

#endif // STRINGS_CONN_SYNAPSE342_H_