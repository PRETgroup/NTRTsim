#ifndef STRINGS_CONN_SYNAPSE62_H_
#define STRINGS_CONN_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse62 States
enum StringsConnSynapse62States {
    STRINGS_CONN_SYNAPSE62_L,
};

// strings_conn_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse62States state;
} StringsConnSynapse62;

// strings_conn_synapse62 Initialisation function
void StringsConnSynapse62Init(StringsConnSynapse62* me);

// strings_conn_synapse62 Execution function
void StringsConnSynapse62Run(StringsConnSynapse62* me);

#endif // STRINGS_CONN_SYNAPSE62_H_