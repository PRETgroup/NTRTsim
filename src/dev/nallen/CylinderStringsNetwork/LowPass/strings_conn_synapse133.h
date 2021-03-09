#ifndef STRINGS_CONN_SYNAPSE133_H_
#define STRINGS_CONN_SYNAPSE133_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse133 States
enum StringsConnSynapse133States {
    STRINGS_CONN_SYNAPSE133_L,
};

// strings_conn_synapse133 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse133States state;
} StringsConnSynapse133;

// strings_conn_synapse133 Initialisation function
void StringsConnSynapse133Init(StringsConnSynapse133* me);

// strings_conn_synapse133 Execution function
void StringsConnSynapse133Run(StringsConnSynapse133* me);

#endif // STRINGS_CONN_SYNAPSE133_H_