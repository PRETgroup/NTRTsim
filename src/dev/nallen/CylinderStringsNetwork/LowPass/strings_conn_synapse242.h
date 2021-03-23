#ifndef STRINGS_CONN_SYNAPSE242_H_
#define STRINGS_CONN_SYNAPSE242_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse242 States
enum StringsConnSynapse242States {
    STRINGS_CONN_SYNAPSE242_L,
};

// strings_conn_synapse242 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse242States state;
} StringsConnSynapse242;

// strings_conn_synapse242 Initialisation function
void StringsConnSynapse242Init(StringsConnSynapse242* me);

// strings_conn_synapse242 Execution function
void StringsConnSynapse242Run(StringsConnSynapse242* me);

#endif // STRINGS_CONN_SYNAPSE242_H_