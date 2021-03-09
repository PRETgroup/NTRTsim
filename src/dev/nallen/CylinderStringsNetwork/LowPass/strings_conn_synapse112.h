#ifndef STRINGS_CONN_SYNAPSE112_H_
#define STRINGS_CONN_SYNAPSE112_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse112 States
enum StringsConnSynapse112States {
    STRINGS_CONN_SYNAPSE112_L,
};

// strings_conn_synapse112 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse112States state;
} StringsConnSynapse112;

// strings_conn_synapse112 Initialisation function
void StringsConnSynapse112Init(StringsConnSynapse112* me);

// strings_conn_synapse112 Execution function
void StringsConnSynapse112Run(StringsConnSynapse112* me);

#endif // STRINGS_CONN_SYNAPSE112_H_