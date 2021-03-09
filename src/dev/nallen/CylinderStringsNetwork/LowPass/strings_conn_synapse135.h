#ifndef STRINGS_CONN_SYNAPSE135_H_
#define STRINGS_CONN_SYNAPSE135_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse135 States
enum StringsConnSynapse135States {
    STRINGS_CONN_SYNAPSE135_L,
};

// strings_conn_synapse135 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse135States state;
} StringsConnSynapse135;

// strings_conn_synapse135 Initialisation function
void StringsConnSynapse135Init(StringsConnSynapse135* me);

// strings_conn_synapse135 Execution function
void StringsConnSynapse135Run(StringsConnSynapse135* me);

#endif // STRINGS_CONN_SYNAPSE135_H_