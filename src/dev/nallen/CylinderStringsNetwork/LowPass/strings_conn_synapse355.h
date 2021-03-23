#ifndef STRINGS_CONN_SYNAPSE355_H_
#define STRINGS_CONN_SYNAPSE355_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse355 States
enum StringsConnSynapse355States {
    STRINGS_CONN_SYNAPSE355_L,
};

// strings_conn_synapse355 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse355States state;
} StringsConnSynapse355;

// strings_conn_synapse355 Initialisation function
void StringsConnSynapse355Init(StringsConnSynapse355* me);

// strings_conn_synapse355 Execution function
void StringsConnSynapse355Run(StringsConnSynapse355* me);

#endif // STRINGS_CONN_SYNAPSE355_H_