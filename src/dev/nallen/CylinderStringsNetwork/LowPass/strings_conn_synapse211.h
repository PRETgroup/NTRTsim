#ifndef STRINGS_CONN_SYNAPSE211_H_
#define STRINGS_CONN_SYNAPSE211_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse211 States
enum StringsConnSynapse211States {
    STRINGS_CONN_SYNAPSE211_L,
};

// strings_conn_synapse211 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse211States state;
} StringsConnSynapse211;

// strings_conn_synapse211 Initialisation function
void StringsConnSynapse211Init(StringsConnSynapse211* me);

// strings_conn_synapse211 Execution function
void StringsConnSynapse211Run(StringsConnSynapse211* me);

#endif // STRINGS_CONN_SYNAPSE211_H_