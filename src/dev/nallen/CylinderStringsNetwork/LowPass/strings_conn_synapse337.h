#ifndef STRINGS_CONN_SYNAPSE337_H_
#define STRINGS_CONN_SYNAPSE337_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse337 States
enum StringsConnSynapse337States {
    STRINGS_CONN_SYNAPSE337_L,
};

// strings_conn_synapse337 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse337States state;
} StringsConnSynapse337;

// strings_conn_synapse337 Initialisation function
void StringsConnSynapse337Init(StringsConnSynapse337* me);

// strings_conn_synapse337 Execution function
void StringsConnSynapse337Run(StringsConnSynapse337* me);

#endif // STRINGS_CONN_SYNAPSE337_H_