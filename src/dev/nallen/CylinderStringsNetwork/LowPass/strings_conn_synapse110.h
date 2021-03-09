#ifndef STRINGS_CONN_SYNAPSE110_H_
#define STRINGS_CONN_SYNAPSE110_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse110 States
enum StringsConnSynapse110States {
    STRINGS_CONN_SYNAPSE110_L,
};

// strings_conn_synapse110 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse110States state;
} StringsConnSynapse110;

// strings_conn_synapse110 Initialisation function
void StringsConnSynapse110Init(StringsConnSynapse110* me);

// strings_conn_synapse110 Execution function
void StringsConnSynapse110Run(StringsConnSynapse110* me);

#endif // STRINGS_CONN_SYNAPSE110_H_