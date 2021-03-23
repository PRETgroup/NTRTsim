#ifndef STRINGS_CONN_SYNAPSE372_H_
#define STRINGS_CONN_SYNAPSE372_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse372 States
enum StringsConnSynapse372States {
    STRINGS_CONN_SYNAPSE372_L,
};

// strings_conn_synapse372 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse372States state;
} StringsConnSynapse372;

// strings_conn_synapse372 Initialisation function
void StringsConnSynapse372Init(StringsConnSynapse372* me);

// strings_conn_synapse372 Execution function
void StringsConnSynapse372Run(StringsConnSynapse372* me);

#endif // STRINGS_CONN_SYNAPSE372_H_