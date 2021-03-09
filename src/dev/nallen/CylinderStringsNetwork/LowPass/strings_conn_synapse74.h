#ifndef STRINGS_CONN_SYNAPSE74_H_
#define STRINGS_CONN_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse74 States
enum StringsConnSynapse74States {
    STRINGS_CONN_SYNAPSE74_L,
};

// strings_conn_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse74States state;
} StringsConnSynapse74;

// strings_conn_synapse74 Initialisation function
void StringsConnSynapse74Init(StringsConnSynapse74* me);

// strings_conn_synapse74 Execution function
void StringsConnSynapse74Run(StringsConnSynapse74* me);

#endif // STRINGS_CONN_SYNAPSE74_H_