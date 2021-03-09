#ifndef STRINGS_CONN_SYNAPSE105_H_
#define STRINGS_CONN_SYNAPSE105_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse105 States
enum StringsConnSynapse105States {
    STRINGS_CONN_SYNAPSE105_L,
};

// strings_conn_synapse105 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse105States state;
} StringsConnSynapse105;

// strings_conn_synapse105 Initialisation function
void StringsConnSynapse105Init(StringsConnSynapse105* me);

// strings_conn_synapse105 Execution function
void StringsConnSynapse105Run(StringsConnSynapse105* me);

#endif // STRINGS_CONN_SYNAPSE105_H_