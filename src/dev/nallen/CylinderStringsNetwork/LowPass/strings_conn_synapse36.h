#ifndef STRINGS_CONN_SYNAPSE36_H_
#define STRINGS_CONN_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse36 States
enum StringsConnSynapse36States {
    STRINGS_CONN_SYNAPSE36_L,
};

// strings_conn_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse36States state;
} StringsConnSynapse36;

// strings_conn_synapse36 Initialisation function
void StringsConnSynapse36Init(StringsConnSynapse36* me);

// strings_conn_synapse36 Execution function
void StringsConnSynapse36Run(StringsConnSynapse36* me);

#endif // STRINGS_CONN_SYNAPSE36_H_