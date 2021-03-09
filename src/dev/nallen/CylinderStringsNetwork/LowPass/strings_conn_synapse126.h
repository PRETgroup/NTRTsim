#ifndef STRINGS_CONN_SYNAPSE126_H_
#define STRINGS_CONN_SYNAPSE126_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse126 States
enum StringsConnSynapse126States {
    STRINGS_CONN_SYNAPSE126_L,
};

// strings_conn_synapse126 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse126States state;
} StringsConnSynapse126;

// strings_conn_synapse126 Initialisation function
void StringsConnSynapse126Init(StringsConnSynapse126* me);

// strings_conn_synapse126 Execution function
void StringsConnSynapse126Run(StringsConnSynapse126* me);

#endif // STRINGS_CONN_SYNAPSE126_H_