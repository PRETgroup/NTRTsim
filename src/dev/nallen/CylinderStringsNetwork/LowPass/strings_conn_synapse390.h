#ifndef STRINGS_CONN_SYNAPSE390_H_
#define STRINGS_CONN_SYNAPSE390_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse390 States
enum StringsConnSynapse390States {
    STRINGS_CONN_SYNAPSE390_L,
};

// strings_conn_synapse390 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse390States state;
} StringsConnSynapse390;

// strings_conn_synapse390 Initialisation function
void StringsConnSynapse390Init(StringsConnSynapse390* me);

// strings_conn_synapse390 Execution function
void StringsConnSynapse390Run(StringsConnSynapse390* me);

#endif // STRINGS_CONN_SYNAPSE390_H_