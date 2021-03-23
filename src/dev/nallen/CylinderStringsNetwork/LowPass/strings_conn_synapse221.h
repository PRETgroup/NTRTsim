#ifndef STRINGS_CONN_SYNAPSE221_H_
#define STRINGS_CONN_SYNAPSE221_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse221 States
enum StringsConnSynapse221States {
    STRINGS_CONN_SYNAPSE221_L,
};

// strings_conn_synapse221 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse221States state;
} StringsConnSynapse221;

// strings_conn_synapse221 Initialisation function
void StringsConnSynapse221Init(StringsConnSynapse221* me);

// strings_conn_synapse221 Execution function
void StringsConnSynapse221Run(StringsConnSynapse221* me);

#endif // STRINGS_CONN_SYNAPSE221_H_