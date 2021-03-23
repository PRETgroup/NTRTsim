#ifndef STRINGS_CONN_SYNAPSE249_H_
#define STRINGS_CONN_SYNAPSE249_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse249 States
enum StringsConnSynapse249States {
    STRINGS_CONN_SYNAPSE249_L,
};

// strings_conn_synapse249 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse249States state;
} StringsConnSynapse249;

// strings_conn_synapse249 Initialisation function
void StringsConnSynapse249Init(StringsConnSynapse249* me);

// strings_conn_synapse249 Execution function
void StringsConnSynapse249Run(StringsConnSynapse249* me);

#endif // STRINGS_CONN_SYNAPSE249_H_