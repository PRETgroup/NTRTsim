#ifndef STRINGS_CONN_SYNAPSE27_H_
#define STRINGS_CONN_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse27 States
enum StringsConnSynapse27States {
    STRINGS_CONN_SYNAPSE27_L,
};

// strings_conn_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse27States state;
} StringsConnSynapse27;

// strings_conn_synapse27 Initialisation function
void StringsConnSynapse27Init(StringsConnSynapse27* me);

// strings_conn_synapse27 Execution function
void StringsConnSynapse27Run(StringsConnSynapse27* me);

#endif // STRINGS_CONN_SYNAPSE27_H_