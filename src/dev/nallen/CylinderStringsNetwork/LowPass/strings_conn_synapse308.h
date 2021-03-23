#ifndef STRINGS_CONN_SYNAPSE308_H_
#define STRINGS_CONN_SYNAPSE308_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse308 States
enum StringsConnSynapse308States {
    STRINGS_CONN_SYNAPSE308_L,
};

// strings_conn_synapse308 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse308States state;
} StringsConnSynapse308;

// strings_conn_synapse308 Initialisation function
void StringsConnSynapse308Init(StringsConnSynapse308* me);

// strings_conn_synapse308 Execution function
void StringsConnSynapse308Run(StringsConnSynapse308* me);

#endif // STRINGS_CONN_SYNAPSE308_H_