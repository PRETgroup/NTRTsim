#ifndef STRINGS_CONN_SYNAPSE184_H_
#define STRINGS_CONN_SYNAPSE184_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse184 States
enum StringsConnSynapse184States {
    STRINGS_CONN_SYNAPSE184_L,
};

// strings_conn_synapse184 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse184States state;
} StringsConnSynapse184;

// strings_conn_synapse184 Initialisation function
void StringsConnSynapse184Init(StringsConnSynapse184* me);

// strings_conn_synapse184 Execution function
void StringsConnSynapse184Run(StringsConnSynapse184* me);

#endif // STRINGS_CONN_SYNAPSE184_H_