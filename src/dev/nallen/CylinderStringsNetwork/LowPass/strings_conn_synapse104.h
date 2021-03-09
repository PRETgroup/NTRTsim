#ifndef STRINGS_CONN_SYNAPSE104_H_
#define STRINGS_CONN_SYNAPSE104_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse104 States
enum StringsConnSynapse104States {
    STRINGS_CONN_SYNAPSE104_L,
};

// strings_conn_synapse104 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse104States state;
} StringsConnSynapse104;

// strings_conn_synapse104 Initialisation function
void StringsConnSynapse104Init(StringsConnSynapse104* me);

// strings_conn_synapse104 Execution function
void StringsConnSynapse104Run(StringsConnSynapse104* me);

#endif // STRINGS_CONN_SYNAPSE104_H_