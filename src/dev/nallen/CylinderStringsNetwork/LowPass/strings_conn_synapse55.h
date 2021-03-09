#ifndef STRINGS_CONN_SYNAPSE55_H_
#define STRINGS_CONN_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse55 States
enum StringsConnSynapse55States {
    STRINGS_CONN_SYNAPSE55_L,
};

// strings_conn_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse55States state;
} StringsConnSynapse55;

// strings_conn_synapse55 Initialisation function
void StringsConnSynapse55Init(StringsConnSynapse55* me);

// strings_conn_synapse55 Execution function
void StringsConnSynapse55Run(StringsConnSynapse55* me);

#endif // STRINGS_CONN_SYNAPSE55_H_