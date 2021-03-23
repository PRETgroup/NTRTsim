#ifndef STRINGS_CONN_SYNAPSE335_H_
#define STRINGS_CONN_SYNAPSE335_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse335 States
enum StringsConnSynapse335States {
    STRINGS_CONN_SYNAPSE335_L,
};

// strings_conn_synapse335 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse335States state;
} StringsConnSynapse335;

// strings_conn_synapse335 Initialisation function
void StringsConnSynapse335Init(StringsConnSynapse335* me);

// strings_conn_synapse335 Execution function
void StringsConnSynapse335Run(StringsConnSynapse335* me);

#endif // STRINGS_CONN_SYNAPSE335_H_