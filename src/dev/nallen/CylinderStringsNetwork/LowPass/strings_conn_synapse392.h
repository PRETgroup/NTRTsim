#ifndef STRINGS_CONN_SYNAPSE392_H_
#define STRINGS_CONN_SYNAPSE392_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse392 States
enum StringsConnSynapse392States {
    STRINGS_CONN_SYNAPSE392_L,
};

// strings_conn_synapse392 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse392States state;
} StringsConnSynapse392;

// strings_conn_synapse392 Initialisation function
void StringsConnSynapse392Init(StringsConnSynapse392* me);

// strings_conn_synapse392 Execution function
void StringsConnSynapse392Run(StringsConnSynapse392* me);

#endif // STRINGS_CONN_SYNAPSE392_H_