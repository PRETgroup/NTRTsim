#ifndef STRINGS_CONN_SYNAPSE3_H_
#define STRINGS_CONN_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse3 States
enum StringsConnSynapse3States {
    STRINGS_CONN_SYNAPSE3_L,
};

// strings_conn_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse3States state;
} StringsConnSynapse3;

// strings_conn_synapse3 Initialisation function
void StringsConnSynapse3Init(StringsConnSynapse3* me);

// strings_conn_synapse3 Execution function
void StringsConnSynapse3Run(StringsConnSynapse3* me);

#endif // STRINGS_CONN_SYNAPSE3_H_