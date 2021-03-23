#ifndef STRINGS_CONN_SYNAPSE206_H_
#define STRINGS_CONN_SYNAPSE206_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse206 States
enum StringsConnSynapse206States {
    STRINGS_CONN_SYNAPSE206_L,
};

// strings_conn_synapse206 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse206States state;
} StringsConnSynapse206;

// strings_conn_synapse206 Initialisation function
void StringsConnSynapse206Init(StringsConnSynapse206* me);

// strings_conn_synapse206 Execution function
void StringsConnSynapse206Run(StringsConnSynapse206* me);

#endif // STRINGS_CONN_SYNAPSE206_H_