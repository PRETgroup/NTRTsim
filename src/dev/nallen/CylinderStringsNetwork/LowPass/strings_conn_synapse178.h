#ifndef STRINGS_CONN_SYNAPSE178_H_
#define STRINGS_CONN_SYNAPSE178_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse178 States
enum StringsConnSynapse178States {
    STRINGS_CONN_SYNAPSE178_L,
};

// strings_conn_synapse178 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse178States state;
} StringsConnSynapse178;

// strings_conn_synapse178 Initialisation function
void StringsConnSynapse178Init(StringsConnSynapse178* me);

// strings_conn_synapse178 Execution function
void StringsConnSynapse178Run(StringsConnSynapse178* me);

#endif // STRINGS_CONN_SYNAPSE178_H_