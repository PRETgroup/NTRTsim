#ifndef STRINGS_CONN_SYNAPSE217_H_
#define STRINGS_CONN_SYNAPSE217_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse217 States
enum StringsConnSynapse217States {
    STRINGS_CONN_SYNAPSE217_L,
};

// strings_conn_synapse217 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse217States state;
} StringsConnSynapse217;

// strings_conn_synapse217 Initialisation function
void StringsConnSynapse217Init(StringsConnSynapse217* me);

// strings_conn_synapse217 Execution function
void StringsConnSynapse217Run(StringsConnSynapse217* me);

#endif // STRINGS_CONN_SYNAPSE217_H_