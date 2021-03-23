#ifndef STRINGS_CONN_SYNAPSE259_H_
#define STRINGS_CONN_SYNAPSE259_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse259 States
enum StringsConnSynapse259States {
    STRINGS_CONN_SYNAPSE259_L,
};

// strings_conn_synapse259 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse259States state;
} StringsConnSynapse259;

// strings_conn_synapse259 Initialisation function
void StringsConnSynapse259Init(StringsConnSynapse259* me);

// strings_conn_synapse259 Execution function
void StringsConnSynapse259Run(StringsConnSynapse259* me);

#endif // STRINGS_CONN_SYNAPSE259_H_