#ifndef STRINGS_CONN_SYNAPSE39_H_
#define STRINGS_CONN_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse39 States
enum StringsConnSynapse39States {
    STRINGS_CONN_SYNAPSE39_L,
};

// strings_conn_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse39States state;
} StringsConnSynapse39;

// strings_conn_synapse39 Initialisation function
void StringsConnSynapse39Init(StringsConnSynapse39* me);

// strings_conn_synapse39 Execution function
void StringsConnSynapse39Run(StringsConnSynapse39* me);

#endif // STRINGS_CONN_SYNAPSE39_H_