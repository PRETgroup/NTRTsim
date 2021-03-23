#ifndef STRINGS_CONN_SYNAPSE277_H_
#define STRINGS_CONN_SYNAPSE277_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse277 States
enum StringsConnSynapse277States {
    STRINGS_CONN_SYNAPSE277_L,
};

// strings_conn_synapse277 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse277States state;
} StringsConnSynapse277;

// strings_conn_synapse277 Initialisation function
void StringsConnSynapse277Init(StringsConnSynapse277* me);

// strings_conn_synapse277 Execution function
void StringsConnSynapse277Run(StringsConnSynapse277* me);

#endif // STRINGS_CONN_SYNAPSE277_H_