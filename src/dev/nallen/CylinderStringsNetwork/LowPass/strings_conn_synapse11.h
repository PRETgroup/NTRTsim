#ifndef STRINGS_CONN_SYNAPSE11_H_
#define STRINGS_CONN_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse11 States
enum StringsConnSynapse11States {
    STRINGS_CONN_SYNAPSE11_L,
};

// strings_conn_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse11States state;
} StringsConnSynapse11;

// strings_conn_synapse11 Initialisation function
void StringsConnSynapse11Init(StringsConnSynapse11* me);

// strings_conn_synapse11 Execution function
void StringsConnSynapse11Run(StringsConnSynapse11* me);

#endif // STRINGS_CONN_SYNAPSE11_H_