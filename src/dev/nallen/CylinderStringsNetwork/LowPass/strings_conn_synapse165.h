#ifndef STRINGS_CONN_SYNAPSE165_H_
#define STRINGS_CONN_SYNAPSE165_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse165 States
enum StringsConnSynapse165States {
    STRINGS_CONN_SYNAPSE165_L,
};

// strings_conn_synapse165 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse165States state;
} StringsConnSynapse165;

// strings_conn_synapse165 Initialisation function
void StringsConnSynapse165Init(StringsConnSynapse165* me);

// strings_conn_synapse165 Execution function
void StringsConnSynapse165Run(StringsConnSynapse165* me);

#endif // STRINGS_CONN_SYNAPSE165_H_