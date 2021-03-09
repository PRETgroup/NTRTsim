#ifndef STRINGS_CONN_SYNAPSE153_H_
#define STRINGS_CONN_SYNAPSE153_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse153 States
enum StringsConnSynapse153States {
    STRINGS_CONN_SYNAPSE153_L,
};

// strings_conn_synapse153 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse153States state;
} StringsConnSynapse153;

// strings_conn_synapse153 Initialisation function
void StringsConnSynapse153Init(StringsConnSynapse153* me);

// strings_conn_synapse153 Execution function
void StringsConnSynapse153Run(StringsConnSynapse153* me);

#endif // STRINGS_CONN_SYNAPSE153_H_