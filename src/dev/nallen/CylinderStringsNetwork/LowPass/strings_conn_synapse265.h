#ifndef STRINGS_CONN_SYNAPSE265_H_
#define STRINGS_CONN_SYNAPSE265_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse265 States
enum StringsConnSynapse265States {
    STRINGS_CONN_SYNAPSE265_L,
};

// strings_conn_synapse265 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse265States state;
} StringsConnSynapse265;

// strings_conn_synapse265 Initialisation function
void StringsConnSynapse265Init(StringsConnSynapse265* me);

// strings_conn_synapse265 Execution function
void StringsConnSynapse265Run(StringsConnSynapse265* me);

#endif // STRINGS_CONN_SYNAPSE265_H_