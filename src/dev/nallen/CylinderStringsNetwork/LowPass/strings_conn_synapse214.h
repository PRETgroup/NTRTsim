#ifndef STRINGS_CONN_SYNAPSE214_H_
#define STRINGS_CONN_SYNAPSE214_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse214 States
enum StringsConnSynapse214States {
    STRINGS_CONN_SYNAPSE214_L,
};

// strings_conn_synapse214 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse214States state;
} StringsConnSynapse214;

// strings_conn_synapse214 Initialisation function
void StringsConnSynapse214Init(StringsConnSynapse214* me);

// strings_conn_synapse214 Execution function
void StringsConnSynapse214Run(StringsConnSynapse214* me);

#endif // STRINGS_CONN_SYNAPSE214_H_