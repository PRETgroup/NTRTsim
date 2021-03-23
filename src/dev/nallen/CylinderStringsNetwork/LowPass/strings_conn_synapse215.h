#ifndef STRINGS_CONN_SYNAPSE215_H_
#define STRINGS_CONN_SYNAPSE215_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse215 States
enum StringsConnSynapse215States {
    STRINGS_CONN_SYNAPSE215_L,
};

// strings_conn_synapse215 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse215States state;
} StringsConnSynapse215;

// strings_conn_synapse215 Initialisation function
void StringsConnSynapse215Init(StringsConnSynapse215* me);

// strings_conn_synapse215 Execution function
void StringsConnSynapse215Run(StringsConnSynapse215* me);

#endif // STRINGS_CONN_SYNAPSE215_H_