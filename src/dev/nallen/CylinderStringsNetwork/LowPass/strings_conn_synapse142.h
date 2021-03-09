#ifndef STRINGS_CONN_SYNAPSE142_H_
#define STRINGS_CONN_SYNAPSE142_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse142 States
enum StringsConnSynapse142States {
    STRINGS_CONN_SYNAPSE142_L,
};

// strings_conn_synapse142 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse142States state;
} StringsConnSynapse142;

// strings_conn_synapse142 Initialisation function
void StringsConnSynapse142Init(StringsConnSynapse142* me);

// strings_conn_synapse142 Execution function
void StringsConnSynapse142Run(StringsConnSynapse142* me);

#endif // STRINGS_CONN_SYNAPSE142_H_