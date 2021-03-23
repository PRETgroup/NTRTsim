#ifndef STRINGS_CONN_SYNAPSE350_H_
#define STRINGS_CONN_SYNAPSE350_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse350 States
enum StringsConnSynapse350States {
    STRINGS_CONN_SYNAPSE350_L,
};

// strings_conn_synapse350 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse350States state;
} StringsConnSynapse350;

// strings_conn_synapse350 Initialisation function
void StringsConnSynapse350Init(StringsConnSynapse350* me);

// strings_conn_synapse350 Execution function
void StringsConnSynapse350Run(StringsConnSynapse350* me);

#endif // STRINGS_CONN_SYNAPSE350_H_