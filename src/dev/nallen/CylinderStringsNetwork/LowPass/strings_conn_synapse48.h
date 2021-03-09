#ifndef STRINGS_CONN_SYNAPSE48_H_
#define STRINGS_CONN_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse48 States
enum StringsConnSynapse48States {
    STRINGS_CONN_SYNAPSE48_L,
};

// strings_conn_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse48States state;
} StringsConnSynapse48;

// strings_conn_synapse48 Initialisation function
void StringsConnSynapse48Init(StringsConnSynapse48* me);

// strings_conn_synapse48 Execution function
void StringsConnSynapse48Run(StringsConnSynapse48* me);

#endif // STRINGS_CONN_SYNAPSE48_H_