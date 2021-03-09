#ifndef STRINGS_CONN_SYNAPSE115_H_
#define STRINGS_CONN_SYNAPSE115_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse115 States
enum StringsConnSynapse115States {
    STRINGS_CONN_SYNAPSE115_L,
};

// strings_conn_synapse115 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse115States state;
} StringsConnSynapse115;

// strings_conn_synapse115 Initialisation function
void StringsConnSynapse115Init(StringsConnSynapse115* me);

// strings_conn_synapse115 Execution function
void StringsConnSynapse115Run(StringsConnSynapse115* me);

#endif // STRINGS_CONN_SYNAPSE115_H_