#ifndef STRINGS_CONN_SYNAPSE196_H_
#define STRINGS_CONN_SYNAPSE196_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse196 States
enum StringsConnSynapse196States {
    STRINGS_CONN_SYNAPSE196_L,
};

// strings_conn_synapse196 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse196States state;
} StringsConnSynapse196;

// strings_conn_synapse196 Initialisation function
void StringsConnSynapse196Init(StringsConnSynapse196* me);

// strings_conn_synapse196 Execution function
void StringsConnSynapse196Run(StringsConnSynapse196* me);

#endif // STRINGS_CONN_SYNAPSE196_H_