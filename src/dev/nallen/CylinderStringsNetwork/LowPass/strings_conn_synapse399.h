#ifndef STRINGS_CONN_SYNAPSE399_H_
#define STRINGS_CONN_SYNAPSE399_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse399 States
enum StringsConnSynapse399States {
    STRINGS_CONN_SYNAPSE399_L,
};

// strings_conn_synapse399 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse399States state;
} StringsConnSynapse399;

// strings_conn_synapse399 Initialisation function
void StringsConnSynapse399Init(StringsConnSynapse399* me);

// strings_conn_synapse399 Execution function
void StringsConnSynapse399Run(StringsConnSynapse399* me);

#endif // STRINGS_CONN_SYNAPSE399_H_