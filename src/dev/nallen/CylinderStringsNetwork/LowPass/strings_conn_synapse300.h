#ifndef STRINGS_CONN_SYNAPSE300_H_
#define STRINGS_CONN_SYNAPSE300_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse300 States
enum StringsConnSynapse300States {
    STRINGS_CONN_SYNAPSE300_L,
};

// strings_conn_synapse300 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse300States state;
} StringsConnSynapse300;

// strings_conn_synapse300 Initialisation function
void StringsConnSynapse300Init(StringsConnSynapse300* me);

// strings_conn_synapse300 Execution function
void StringsConnSynapse300Run(StringsConnSynapse300* me);

#endif // STRINGS_CONN_SYNAPSE300_H_