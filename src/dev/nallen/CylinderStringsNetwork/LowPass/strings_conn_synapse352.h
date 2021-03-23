#ifndef STRINGS_CONN_SYNAPSE352_H_
#define STRINGS_CONN_SYNAPSE352_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse352 States
enum StringsConnSynapse352States {
    STRINGS_CONN_SYNAPSE352_L,
};

// strings_conn_synapse352 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse352States state;
} StringsConnSynapse352;

// strings_conn_synapse352 Initialisation function
void StringsConnSynapse352Init(StringsConnSynapse352* me);

// strings_conn_synapse352 Execution function
void StringsConnSynapse352Run(StringsConnSynapse352* me);

#endif // STRINGS_CONN_SYNAPSE352_H_