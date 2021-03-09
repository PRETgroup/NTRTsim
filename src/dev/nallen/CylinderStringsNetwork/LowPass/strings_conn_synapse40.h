#ifndef STRINGS_CONN_SYNAPSE40_H_
#define STRINGS_CONN_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse40 States
enum StringsConnSynapse40States {
    STRINGS_CONN_SYNAPSE40_L,
};

// strings_conn_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse40States state;
} StringsConnSynapse40;

// strings_conn_synapse40 Initialisation function
void StringsConnSynapse40Init(StringsConnSynapse40* me);

// strings_conn_synapse40 Execution function
void StringsConnSynapse40Run(StringsConnSynapse40* me);

#endif // STRINGS_CONN_SYNAPSE40_H_