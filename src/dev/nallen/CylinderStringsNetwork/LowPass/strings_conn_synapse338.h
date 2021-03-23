#ifndef STRINGS_CONN_SYNAPSE338_H_
#define STRINGS_CONN_SYNAPSE338_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse338 States
enum StringsConnSynapse338States {
    STRINGS_CONN_SYNAPSE338_L,
};

// strings_conn_synapse338 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse338States state;
} StringsConnSynapse338;

// strings_conn_synapse338 Initialisation function
void StringsConnSynapse338Init(StringsConnSynapse338* me);

// strings_conn_synapse338 Execution function
void StringsConnSynapse338Run(StringsConnSynapse338* me);

#endif // STRINGS_CONN_SYNAPSE338_H_