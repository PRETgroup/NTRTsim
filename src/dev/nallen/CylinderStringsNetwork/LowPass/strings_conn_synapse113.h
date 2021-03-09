#ifndef STRINGS_CONN_SYNAPSE113_H_
#define STRINGS_CONN_SYNAPSE113_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse113 States
enum StringsConnSynapse113States {
    STRINGS_CONN_SYNAPSE113_L,
};

// strings_conn_synapse113 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse113States state;
} StringsConnSynapse113;

// strings_conn_synapse113 Initialisation function
void StringsConnSynapse113Init(StringsConnSynapse113* me);

// strings_conn_synapse113 Execution function
void StringsConnSynapse113Run(StringsConnSynapse113* me);

#endif // STRINGS_CONN_SYNAPSE113_H_