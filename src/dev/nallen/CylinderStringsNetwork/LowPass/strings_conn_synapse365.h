#ifndef STRINGS_CONN_SYNAPSE365_H_
#define STRINGS_CONN_SYNAPSE365_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse365 States
enum StringsConnSynapse365States {
    STRINGS_CONN_SYNAPSE365_L,
};

// strings_conn_synapse365 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse365States state;
} StringsConnSynapse365;

// strings_conn_synapse365 Initialisation function
void StringsConnSynapse365Init(StringsConnSynapse365* me);

// strings_conn_synapse365 Execution function
void StringsConnSynapse365Run(StringsConnSynapse365* me);

#endif // STRINGS_CONN_SYNAPSE365_H_