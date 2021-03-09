#ifndef STRINGS_CONN_SYNAPSE5_H_
#define STRINGS_CONN_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse5 States
enum StringsConnSynapse5States {
    STRINGS_CONN_SYNAPSE5_L,
};

// strings_conn_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse5States state;
} StringsConnSynapse5;

// strings_conn_synapse5 Initialisation function
void StringsConnSynapse5Init(StringsConnSynapse5* me);

// strings_conn_synapse5 Execution function
void StringsConnSynapse5Run(StringsConnSynapse5* me);

#endif // STRINGS_CONN_SYNAPSE5_H_