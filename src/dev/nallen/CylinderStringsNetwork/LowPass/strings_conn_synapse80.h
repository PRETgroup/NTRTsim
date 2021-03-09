#ifndef STRINGS_CONN_SYNAPSE80_H_
#define STRINGS_CONN_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse80 States
enum StringsConnSynapse80States {
    STRINGS_CONN_SYNAPSE80_L,
};

// strings_conn_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse80States state;
} StringsConnSynapse80;

// strings_conn_synapse80 Initialisation function
void StringsConnSynapse80Init(StringsConnSynapse80* me);

// strings_conn_synapse80 Execution function
void StringsConnSynapse80Run(StringsConnSynapse80* me);

#endif // STRINGS_CONN_SYNAPSE80_H_