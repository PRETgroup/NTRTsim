#ifndef STRINGS_CONN_SYNAPSE12_H_
#define STRINGS_CONN_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse12 States
enum StringsConnSynapse12States {
    STRINGS_CONN_SYNAPSE12_L,
};

// strings_conn_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse12States state;
} StringsConnSynapse12;

// strings_conn_synapse12 Initialisation function
void StringsConnSynapse12Init(StringsConnSynapse12* me);

// strings_conn_synapse12 Execution function
void StringsConnSynapse12Run(StringsConnSynapse12* me);

#endif // STRINGS_CONN_SYNAPSE12_H_