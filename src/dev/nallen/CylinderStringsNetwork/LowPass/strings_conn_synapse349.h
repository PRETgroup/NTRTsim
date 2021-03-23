#ifndef STRINGS_CONN_SYNAPSE349_H_
#define STRINGS_CONN_SYNAPSE349_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse349 States
enum StringsConnSynapse349States {
    STRINGS_CONN_SYNAPSE349_L,
};

// strings_conn_synapse349 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse349States state;
} StringsConnSynapse349;

// strings_conn_synapse349 Initialisation function
void StringsConnSynapse349Init(StringsConnSynapse349* me);

// strings_conn_synapse349 Execution function
void StringsConnSynapse349Run(StringsConnSynapse349* me);

#endif // STRINGS_CONN_SYNAPSE349_H_