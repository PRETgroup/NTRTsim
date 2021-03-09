#ifndef STRINGS_CONN_SYNAPSE93_H_
#define STRINGS_CONN_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse93 States
enum StringsConnSynapse93States {
    STRINGS_CONN_SYNAPSE93_L,
};

// strings_conn_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse93States state;
} StringsConnSynapse93;

// strings_conn_synapse93 Initialisation function
void StringsConnSynapse93Init(StringsConnSynapse93* me);

// strings_conn_synapse93 Execution function
void StringsConnSynapse93Run(StringsConnSynapse93* me);

#endif // STRINGS_CONN_SYNAPSE93_H_