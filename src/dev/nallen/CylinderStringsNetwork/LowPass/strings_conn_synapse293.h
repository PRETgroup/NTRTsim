#ifndef STRINGS_CONN_SYNAPSE293_H_
#define STRINGS_CONN_SYNAPSE293_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse293 States
enum StringsConnSynapse293States {
    STRINGS_CONN_SYNAPSE293_L,
};

// strings_conn_synapse293 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse293States state;
} StringsConnSynapse293;

// strings_conn_synapse293 Initialisation function
void StringsConnSynapse293Init(StringsConnSynapse293* me);

// strings_conn_synapse293 Execution function
void StringsConnSynapse293Run(StringsConnSynapse293* me);

#endif // STRINGS_CONN_SYNAPSE293_H_