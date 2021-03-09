#ifndef STRINGS_CONN_SYNAPSE182_H_
#define STRINGS_CONN_SYNAPSE182_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse182 States
enum StringsConnSynapse182States {
    STRINGS_CONN_SYNAPSE182_L,
};

// strings_conn_synapse182 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse182States state;
} StringsConnSynapse182;

// strings_conn_synapse182 Initialisation function
void StringsConnSynapse182Init(StringsConnSynapse182* me);

// strings_conn_synapse182 Execution function
void StringsConnSynapse182Run(StringsConnSynapse182* me);

#endif // STRINGS_CONN_SYNAPSE182_H_