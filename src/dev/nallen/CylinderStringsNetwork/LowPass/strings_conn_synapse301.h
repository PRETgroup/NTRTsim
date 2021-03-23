#ifndef STRINGS_CONN_SYNAPSE301_H_
#define STRINGS_CONN_SYNAPSE301_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse301 States
enum StringsConnSynapse301States {
    STRINGS_CONN_SYNAPSE301_L,
};

// strings_conn_synapse301 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse301States state;
} StringsConnSynapse301;

// strings_conn_synapse301 Initialisation function
void StringsConnSynapse301Init(StringsConnSynapse301* me);

// strings_conn_synapse301 Execution function
void StringsConnSynapse301Run(StringsConnSynapse301* me);

#endif // STRINGS_CONN_SYNAPSE301_H_