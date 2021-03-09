#ifndef STRINGS_CONN_SYNAPSE183_H_
#define STRINGS_CONN_SYNAPSE183_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse183 States
enum StringsConnSynapse183States {
    STRINGS_CONN_SYNAPSE183_L,
};

// strings_conn_synapse183 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse183States state;
} StringsConnSynapse183;

// strings_conn_synapse183 Initialisation function
void StringsConnSynapse183Init(StringsConnSynapse183* me);

// strings_conn_synapse183 Execution function
void StringsConnSynapse183Run(StringsConnSynapse183* me);

#endif // STRINGS_CONN_SYNAPSE183_H_