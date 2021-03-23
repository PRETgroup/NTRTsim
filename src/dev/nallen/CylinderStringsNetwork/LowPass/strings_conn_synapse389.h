#ifndef STRINGS_CONN_SYNAPSE389_H_
#define STRINGS_CONN_SYNAPSE389_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse389 States
enum StringsConnSynapse389States {
    STRINGS_CONN_SYNAPSE389_L,
};

// strings_conn_synapse389 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse389States state;
} StringsConnSynapse389;

// strings_conn_synapse389 Initialisation function
void StringsConnSynapse389Init(StringsConnSynapse389* me);

// strings_conn_synapse389 Execution function
void StringsConnSynapse389Run(StringsConnSynapse389* me);

#endif // STRINGS_CONN_SYNAPSE389_H_