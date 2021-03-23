#ifndef STRINGS_CONN_SYNAPSE312_H_
#define STRINGS_CONN_SYNAPSE312_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse312 States
enum StringsConnSynapse312States {
    STRINGS_CONN_SYNAPSE312_L,
};

// strings_conn_synapse312 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse312States state;
} StringsConnSynapse312;

// strings_conn_synapse312 Initialisation function
void StringsConnSynapse312Init(StringsConnSynapse312* me);

// strings_conn_synapse312 Execution function
void StringsConnSynapse312Run(StringsConnSynapse312* me);

#endif // STRINGS_CONN_SYNAPSE312_H_