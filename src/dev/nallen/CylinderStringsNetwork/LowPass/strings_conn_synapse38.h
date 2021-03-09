#ifndef STRINGS_CONN_SYNAPSE38_H_
#define STRINGS_CONN_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse38 States
enum StringsConnSynapse38States {
    STRINGS_CONN_SYNAPSE38_L,
};

// strings_conn_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse38States state;
} StringsConnSynapse38;

// strings_conn_synapse38 Initialisation function
void StringsConnSynapse38Init(StringsConnSynapse38* me);

// strings_conn_synapse38 Execution function
void StringsConnSynapse38Run(StringsConnSynapse38* me);

#endif // STRINGS_CONN_SYNAPSE38_H_