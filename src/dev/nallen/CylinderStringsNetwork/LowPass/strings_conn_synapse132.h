#ifndef STRINGS_CONN_SYNAPSE132_H_
#define STRINGS_CONN_SYNAPSE132_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse132 States
enum StringsConnSynapse132States {
    STRINGS_CONN_SYNAPSE132_L,
};

// strings_conn_synapse132 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse132States state;
} StringsConnSynapse132;

// strings_conn_synapse132 Initialisation function
void StringsConnSynapse132Init(StringsConnSynapse132* me);

// strings_conn_synapse132 Execution function
void StringsConnSynapse132Run(StringsConnSynapse132* me);

#endif // STRINGS_CONN_SYNAPSE132_H_