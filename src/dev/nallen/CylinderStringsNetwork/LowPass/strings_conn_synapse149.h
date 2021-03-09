#ifndef STRINGS_CONN_SYNAPSE149_H_
#define STRINGS_CONN_SYNAPSE149_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse149 States
enum StringsConnSynapse149States {
    STRINGS_CONN_SYNAPSE149_L,
};

// strings_conn_synapse149 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse149States state;
} StringsConnSynapse149;

// strings_conn_synapse149 Initialisation function
void StringsConnSynapse149Init(StringsConnSynapse149* me);

// strings_conn_synapse149 Execution function
void StringsConnSynapse149Run(StringsConnSynapse149* me);

#endif // STRINGS_CONN_SYNAPSE149_H_