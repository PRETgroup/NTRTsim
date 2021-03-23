#ifndef STRINGS_CONN_SYNAPSE324_H_
#define STRINGS_CONN_SYNAPSE324_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse324 States
enum StringsConnSynapse324States {
    STRINGS_CONN_SYNAPSE324_L,
};

// strings_conn_synapse324 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse324States state;
} StringsConnSynapse324;

// strings_conn_synapse324 Initialisation function
void StringsConnSynapse324Init(StringsConnSynapse324* me);

// strings_conn_synapse324 Execution function
void StringsConnSynapse324Run(StringsConnSynapse324* me);

#endif // STRINGS_CONN_SYNAPSE324_H_