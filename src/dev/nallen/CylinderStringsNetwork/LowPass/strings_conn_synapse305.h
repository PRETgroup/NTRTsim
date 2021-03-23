#ifndef STRINGS_CONN_SYNAPSE305_H_
#define STRINGS_CONN_SYNAPSE305_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse305 States
enum StringsConnSynapse305States {
    STRINGS_CONN_SYNAPSE305_L,
};

// strings_conn_synapse305 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse305States state;
} StringsConnSynapse305;

// strings_conn_synapse305 Initialisation function
void StringsConnSynapse305Init(StringsConnSynapse305* me);

// strings_conn_synapse305 Execution function
void StringsConnSynapse305Run(StringsConnSynapse305* me);

#endif // STRINGS_CONN_SYNAPSE305_H_