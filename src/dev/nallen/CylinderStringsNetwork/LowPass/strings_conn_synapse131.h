#ifndef STRINGS_CONN_SYNAPSE131_H_
#define STRINGS_CONN_SYNAPSE131_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse131 States
enum StringsConnSynapse131States {
    STRINGS_CONN_SYNAPSE131_L,
};

// strings_conn_synapse131 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse131States state;
} StringsConnSynapse131;

// strings_conn_synapse131 Initialisation function
void StringsConnSynapse131Init(StringsConnSynapse131* me);

// strings_conn_synapse131 Execution function
void StringsConnSynapse131Run(StringsConnSynapse131* me);

#endif // STRINGS_CONN_SYNAPSE131_H_