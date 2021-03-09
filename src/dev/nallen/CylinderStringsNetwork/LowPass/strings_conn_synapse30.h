#ifndef STRINGS_CONN_SYNAPSE30_H_
#define STRINGS_CONN_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse30 States
enum StringsConnSynapse30States {
    STRINGS_CONN_SYNAPSE30_L,
};

// strings_conn_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse30States state;
} StringsConnSynapse30;

// strings_conn_synapse30 Initialisation function
void StringsConnSynapse30Init(StringsConnSynapse30* me);

// strings_conn_synapse30 Execution function
void StringsConnSynapse30Run(StringsConnSynapse30* me);

#endif // STRINGS_CONN_SYNAPSE30_H_