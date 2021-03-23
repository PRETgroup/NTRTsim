#ifndef STRINGS_CONN_SYNAPSE384_H_
#define STRINGS_CONN_SYNAPSE384_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse384 States
enum StringsConnSynapse384States {
    STRINGS_CONN_SYNAPSE384_L,
};

// strings_conn_synapse384 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse384States state;
} StringsConnSynapse384;

// strings_conn_synapse384 Initialisation function
void StringsConnSynapse384Init(StringsConnSynapse384* me);

// strings_conn_synapse384 Execution function
void StringsConnSynapse384Run(StringsConnSynapse384* me);

#endif // STRINGS_CONN_SYNAPSE384_H_