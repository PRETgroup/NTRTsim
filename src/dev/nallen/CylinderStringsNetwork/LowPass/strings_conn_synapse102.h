#ifndef STRINGS_CONN_SYNAPSE102_H_
#define STRINGS_CONN_SYNAPSE102_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse102 States
enum StringsConnSynapse102States {
    STRINGS_CONN_SYNAPSE102_L,
};

// strings_conn_synapse102 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse102States state;
} StringsConnSynapse102;

// strings_conn_synapse102 Initialisation function
void StringsConnSynapse102Init(StringsConnSynapse102* me);

// strings_conn_synapse102 Execution function
void StringsConnSynapse102Run(StringsConnSynapse102* me);

#endif // STRINGS_CONN_SYNAPSE102_H_