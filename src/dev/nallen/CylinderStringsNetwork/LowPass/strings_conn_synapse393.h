#ifndef STRINGS_CONN_SYNAPSE393_H_
#define STRINGS_CONN_SYNAPSE393_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse393 States
enum StringsConnSynapse393States {
    STRINGS_CONN_SYNAPSE393_L,
};

// strings_conn_synapse393 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse393States state;
} StringsConnSynapse393;

// strings_conn_synapse393 Initialisation function
void StringsConnSynapse393Init(StringsConnSynapse393* me);

// strings_conn_synapse393 Execution function
void StringsConnSynapse393Run(StringsConnSynapse393* me);

#endif // STRINGS_CONN_SYNAPSE393_H_