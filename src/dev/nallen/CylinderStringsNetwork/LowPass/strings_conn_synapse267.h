#ifndef STRINGS_CONN_SYNAPSE267_H_
#define STRINGS_CONN_SYNAPSE267_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse267 States
enum StringsConnSynapse267States {
    STRINGS_CONN_SYNAPSE267_L,
};

// strings_conn_synapse267 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse267States state;
} StringsConnSynapse267;

// strings_conn_synapse267 Initialisation function
void StringsConnSynapse267Init(StringsConnSynapse267* me);

// strings_conn_synapse267 Execution function
void StringsConnSynapse267Run(StringsConnSynapse267* me);

#endif // STRINGS_CONN_SYNAPSE267_H_