#ifndef STRINGS_CONN_SYNAPSE327_H_
#define STRINGS_CONN_SYNAPSE327_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse327 States
enum StringsConnSynapse327States {
    STRINGS_CONN_SYNAPSE327_L,
};

// strings_conn_synapse327 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse327States state;
} StringsConnSynapse327;

// strings_conn_synapse327 Initialisation function
void StringsConnSynapse327Init(StringsConnSynapse327* me);

// strings_conn_synapse327 Execution function
void StringsConnSynapse327Run(StringsConnSynapse327* me);

#endif // STRINGS_CONN_SYNAPSE327_H_