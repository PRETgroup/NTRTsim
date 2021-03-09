#ifndef STRINGS_CONN_SYNAPSE71_H_
#define STRINGS_CONN_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse71 States
enum StringsConnSynapse71States {
    STRINGS_CONN_SYNAPSE71_L,
};

// strings_conn_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse71States state;
} StringsConnSynapse71;

// strings_conn_synapse71 Initialisation function
void StringsConnSynapse71Init(StringsConnSynapse71* me);

// strings_conn_synapse71 Execution function
void StringsConnSynapse71Run(StringsConnSynapse71* me);

#endif // STRINGS_CONN_SYNAPSE71_H_