#ifndef STRINGS_CONN_SYNAPSE127_H_
#define STRINGS_CONN_SYNAPSE127_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse127 States
enum StringsConnSynapse127States {
    STRINGS_CONN_SYNAPSE127_L,
};

// strings_conn_synapse127 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse127States state;
} StringsConnSynapse127;

// strings_conn_synapse127 Initialisation function
void StringsConnSynapse127Init(StringsConnSynapse127* me);

// strings_conn_synapse127 Execution function
void StringsConnSynapse127Run(StringsConnSynapse127* me);

#endif // STRINGS_CONN_SYNAPSE127_H_