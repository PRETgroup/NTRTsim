#ifndef STRINGS_CONN_SYNAPSE315_H_
#define STRINGS_CONN_SYNAPSE315_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse315 States
enum StringsConnSynapse315States {
    STRINGS_CONN_SYNAPSE315_L,
};

// strings_conn_synapse315 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse315States state;
} StringsConnSynapse315;

// strings_conn_synapse315 Initialisation function
void StringsConnSynapse315Init(StringsConnSynapse315* me);

// strings_conn_synapse315 Execution function
void StringsConnSynapse315Run(StringsConnSynapse315* me);

#endif // STRINGS_CONN_SYNAPSE315_H_