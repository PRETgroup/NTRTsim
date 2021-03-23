#ifndef STRINGS_CONN_SYNAPSE314_H_
#define STRINGS_CONN_SYNAPSE314_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse314 States
enum StringsConnSynapse314States {
    STRINGS_CONN_SYNAPSE314_L,
};

// strings_conn_synapse314 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse314States state;
} StringsConnSynapse314;

// strings_conn_synapse314 Initialisation function
void StringsConnSynapse314Init(StringsConnSynapse314* me);

// strings_conn_synapse314 Execution function
void StringsConnSynapse314Run(StringsConnSynapse314* me);

#endif // STRINGS_CONN_SYNAPSE314_H_