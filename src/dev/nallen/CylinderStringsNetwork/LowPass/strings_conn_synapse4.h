#ifndef STRINGS_CONN_SYNAPSE4_H_
#define STRINGS_CONN_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse4 States
enum StringsConnSynapse4States {
    STRINGS_CONN_SYNAPSE4_L,
};

// strings_conn_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse4States state;
} StringsConnSynapse4;

// strings_conn_synapse4 Initialisation function
void StringsConnSynapse4Init(StringsConnSynapse4* me);

// strings_conn_synapse4 Execution function
void StringsConnSynapse4Run(StringsConnSynapse4* me);

#endif // STRINGS_CONN_SYNAPSE4_H_