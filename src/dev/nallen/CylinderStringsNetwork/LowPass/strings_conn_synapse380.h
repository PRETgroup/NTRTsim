#ifndef STRINGS_CONN_SYNAPSE380_H_
#define STRINGS_CONN_SYNAPSE380_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse380 States
enum StringsConnSynapse380States {
    STRINGS_CONN_SYNAPSE380_L,
};

// strings_conn_synapse380 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse380States state;
} StringsConnSynapse380;

// strings_conn_synapse380 Initialisation function
void StringsConnSynapse380Init(StringsConnSynapse380* me);

// strings_conn_synapse380 Execution function
void StringsConnSynapse380Run(StringsConnSynapse380* me);

#endif // STRINGS_CONN_SYNAPSE380_H_