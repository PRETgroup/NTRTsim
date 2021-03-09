#ifndef STRINGS_CONN_SYNAPSE90_H_
#define STRINGS_CONN_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse90 States
enum StringsConnSynapse90States {
    STRINGS_CONN_SYNAPSE90_L,
};

// strings_conn_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse90States state;
} StringsConnSynapse90;

// strings_conn_synapse90 Initialisation function
void StringsConnSynapse90Init(StringsConnSynapse90* me);

// strings_conn_synapse90 Execution function
void StringsConnSynapse90Run(StringsConnSynapse90* me);

#endif // STRINGS_CONN_SYNAPSE90_H_