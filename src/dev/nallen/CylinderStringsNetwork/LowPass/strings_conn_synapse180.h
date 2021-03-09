#ifndef STRINGS_CONN_SYNAPSE180_H_
#define STRINGS_CONN_SYNAPSE180_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse180 States
enum StringsConnSynapse180States {
    STRINGS_CONN_SYNAPSE180_L,
};

// strings_conn_synapse180 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse180States state;
} StringsConnSynapse180;

// strings_conn_synapse180 Initialisation function
void StringsConnSynapse180Init(StringsConnSynapse180* me);

// strings_conn_synapse180 Execution function
void StringsConnSynapse180Run(StringsConnSynapse180* me);

#endif // STRINGS_CONN_SYNAPSE180_H_