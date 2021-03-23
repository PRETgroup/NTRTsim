#ifndef STRINGS_CONN_SYNAPSE344_H_
#define STRINGS_CONN_SYNAPSE344_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse344 States
enum StringsConnSynapse344States {
    STRINGS_CONN_SYNAPSE344_L,
};

// strings_conn_synapse344 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse344States state;
} StringsConnSynapse344;

// strings_conn_synapse344 Initialisation function
void StringsConnSynapse344Init(StringsConnSynapse344* me);

// strings_conn_synapse344 Execution function
void StringsConnSynapse344Run(StringsConnSynapse344* me);

#endif // STRINGS_CONN_SYNAPSE344_H_