#ifndef STRINGS_CONN_SYNAPSE377_H_
#define STRINGS_CONN_SYNAPSE377_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse377 States
enum StringsConnSynapse377States {
    STRINGS_CONN_SYNAPSE377_L,
};

// strings_conn_synapse377 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse377States state;
} StringsConnSynapse377;

// strings_conn_synapse377 Initialisation function
void StringsConnSynapse377Init(StringsConnSynapse377* me);

// strings_conn_synapse377 Execution function
void StringsConnSynapse377Run(StringsConnSynapse377* me);

#endif // STRINGS_CONN_SYNAPSE377_H_