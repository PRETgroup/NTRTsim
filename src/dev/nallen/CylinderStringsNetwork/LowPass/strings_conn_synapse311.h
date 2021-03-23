#ifndef STRINGS_CONN_SYNAPSE311_H_
#define STRINGS_CONN_SYNAPSE311_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse311 States
enum StringsConnSynapse311States {
    STRINGS_CONN_SYNAPSE311_L,
};

// strings_conn_synapse311 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse311States state;
} StringsConnSynapse311;

// strings_conn_synapse311 Initialisation function
void StringsConnSynapse311Init(StringsConnSynapse311* me);

// strings_conn_synapse311 Execution function
void StringsConnSynapse311Run(StringsConnSynapse311* me);

#endif // STRINGS_CONN_SYNAPSE311_H_