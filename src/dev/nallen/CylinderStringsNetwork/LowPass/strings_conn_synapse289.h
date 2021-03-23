#ifndef STRINGS_CONN_SYNAPSE289_H_
#define STRINGS_CONN_SYNAPSE289_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse289 States
enum StringsConnSynapse289States {
    STRINGS_CONN_SYNAPSE289_L,
};

// strings_conn_synapse289 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse289States state;
} StringsConnSynapse289;

// strings_conn_synapse289 Initialisation function
void StringsConnSynapse289Init(StringsConnSynapse289* me);

// strings_conn_synapse289 Execution function
void StringsConnSynapse289Run(StringsConnSynapse289* me);

#endif // STRINGS_CONN_SYNAPSE289_H_