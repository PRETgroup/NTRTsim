#ifndef STRINGS_CONN_SYNAPSE376_H_
#define STRINGS_CONN_SYNAPSE376_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse376 States
enum StringsConnSynapse376States {
    STRINGS_CONN_SYNAPSE376_L,
};

// strings_conn_synapse376 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse376States state;
} StringsConnSynapse376;

// strings_conn_synapse376 Initialisation function
void StringsConnSynapse376Init(StringsConnSynapse376* me);

// strings_conn_synapse376 Execution function
void StringsConnSynapse376Run(StringsConnSynapse376* me);

#endif // STRINGS_CONN_SYNAPSE376_H_