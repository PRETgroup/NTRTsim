#ifndef STRINGS_CONN_SYNAPSE52_H_
#define STRINGS_CONN_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse52 States
enum StringsConnSynapse52States {
    STRINGS_CONN_SYNAPSE52_L,
};

// strings_conn_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse52States state;
} StringsConnSynapse52;

// strings_conn_synapse52 Initialisation function
void StringsConnSynapse52Init(StringsConnSynapse52* me);

// strings_conn_synapse52 Execution function
void StringsConnSynapse52Run(StringsConnSynapse52* me);

#endif // STRINGS_CONN_SYNAPSE52_H_