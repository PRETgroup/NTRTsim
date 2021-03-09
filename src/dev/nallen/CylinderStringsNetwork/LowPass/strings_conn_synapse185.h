#ifndef STRINGS_CONN_SYNAPSE185_H_
#define STRINGS_CONN_SYNAPSE185_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse185 States
enum StringsConnSynapse185States {
    STRINGS_CONN_SYNAPSE185_L,
};

// strings_conn_synapse185 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse185States state;
} StringsConnSynapse185;

// strings_conn_synapse185 Initialisation function
void StringsConnSynapse185Init(StringsConnSynapse185* me);

// strings_conn_synapse185 Execution function
void StringsConnSynapse185Run(StringsConnSynapse185* me);

#endif // STRINGS_CONN_SYNAPSE185_H_