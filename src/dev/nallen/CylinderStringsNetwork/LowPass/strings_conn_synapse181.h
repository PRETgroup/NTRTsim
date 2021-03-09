#ifndef STRINGS_CONN_SYNAPSE181_H_
#define STRINGS_CONN_SYNAPSE181_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse181 States
enum StringsConnSynapse181States {
    STRINGS_CONN_SYNAPSE181_L,
};

// strings_conn_synapse181 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse181States state;
} StringsConnSynapse181;

// strings_conn_synapse181 Initialisation function
void StringsConnSynapse181Init(StringsConnSynapse181* me);

// strings_conn_synapse181 Execution function
void StringsConnSynapse181Run(StringsConnSynapse181* me);

#endif // STRINGS_CONN_SYNAPSE181_H_