#ifndef STRINGS_CONN_SYNAPSE236_H_
#define STRINGS_CONN_SYNAPSE236_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse236 States
enum StringsConnSynapse236States {
    STRINGS_CONN_SYNAPSE236_L,
};

// strings_conn_synapse236 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse236States state;
} StringsConnSynapse236;

// strings_conn_synapse236 Initialisation function
void StringsConnSynapse236Init(StringsConnSynapse236* me);

// strings_conn_synapse236 Execution function
void StringsConnSynapse236Run(StringsConnSynapse236* me);

#endif // STRINGS_CONN_SYNAPSE236_H_