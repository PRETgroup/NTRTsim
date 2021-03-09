#ifndef STRINGS_CONN_SYNAPSE137_H_
#define STRINGS_CONN_SYNAPSE137_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse137 States
enum StringsConnSynapse137States {
    STRINGS_CONN_SYNAPSE137_L,
};

// strings_conn_synapse137 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse137States state;
} StringsConnSynapse137;

// strings_conn_synapse137 Initialisation function
void StringsConnSynapse137Init(StringsConnSynapse137* me);

// strings_conn_synapse137 Execution function
void StringsConnSynapse137Run(StringsConnSynapse137* me);

#endif // STRINGS_CONN_SYNAPSE137_H_