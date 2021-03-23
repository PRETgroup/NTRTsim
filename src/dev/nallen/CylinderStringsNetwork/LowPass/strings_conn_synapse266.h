#ifndef STRINGS_CONN_SYNAPSE266_H_
#define STRINGS_CONN_SYNAPSE266_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse266 States
enum StringsConnSynapse266States {
    STRINGS_CONN_SYNAPSE266_L,
};

// strings_conn_synapse266 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse266States state;
} StringsConnSynapse266;

// strings_conn_synapse266 Initialisation function
void StringsConnSynapse266Init(StringsConnSynapse266* me);

// strings_conn_synapse266 Execution function
void StringsConnSynapse266Run(StringsConnSynapse266* me);

#endif // STRINGS_CONN_SYNAPSE266_H_