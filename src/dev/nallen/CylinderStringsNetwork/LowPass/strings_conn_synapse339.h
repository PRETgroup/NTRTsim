#ifndef STRINGS_CONN_SYNAPSE339_H_
#define STRINGS_CONN_SYNAPSE339_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse339 States
enum StringsConnSynapse339States {
    STRINGS_CONN_SYNAPSE339_L,
};

// strings_conn_synapse339 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse339States state;
} StringsConnSynapse339;

// strings_conn_synapse339 Initialisation function
void StringsConnSynapse339Init(StringsConnSynapse339* me);

// strings_conn_synapse339 Execution function
void StringsConnSynapse339Run(StringsConnSynapse339* me);

#endif // STRINGS_CONN_SYNAPSE339_H_