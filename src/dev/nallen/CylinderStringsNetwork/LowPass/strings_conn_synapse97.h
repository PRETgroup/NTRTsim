#ifndef STRINGS_CONN_SYNAPSE97_H_
#define STRINGS_CONN_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse97 States
enum StringsConnSynapse97States {
    STRINGS_CONN_SYNAPSE97_L,
};

// strings_conn_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse97States state;
} StringsConnSynapse97;

// strings_conn_synapse97 Initialisation function
void StringsConnSynapse97Init(StringsConnSynapse97* me);

// strings_conn_synapse97 Execution function
void StringsConnSynapse97Run(StringsConnSynapse97* me);

#endif // STRINGS_CONN_SYNAPSE97_H_