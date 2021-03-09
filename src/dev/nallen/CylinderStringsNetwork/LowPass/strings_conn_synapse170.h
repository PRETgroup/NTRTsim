#ifndef STRINGS_CONN_SYNAPSE170_H_
#define STRINGS_CONN_SYNAPSE170_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse170 States
enum StringsConnSynapse170States {
    STRINGS_CONN_SYNAPSE170_L,
};

// strings_conn_synapse170 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse170States state;
} StringsConnSynapse170;

// strings_conn_synapse170 Initialisation function
void StringsConnSynapse170Init(StringsConnSynapse170* me);

// strings_conn_synapse170 Execution function
void StringsConnSynapse170Run(StringsConnSynapse170* me);

#endif // STRINGS_CONN_SYNAPSE170_H_