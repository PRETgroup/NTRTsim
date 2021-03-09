#ifndef STRINGS_CONN_SYNAPSE114_H_
#define STRINGS_CONN_SYNAPSE114_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse114 States
enum StringsConnSynapse114States {
    STRINGS_CONN_SYNAPSE114_L,
};

// strings_conn_synapse114 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse114States state;
} StringsConnSynapse114;

// strings_conn_synapse114 Initialisation function
void StringsConnSynapse114Init(StringsConnSynapse114* me);

// strings_conn_synapse114 Execution function
void StringsConnSynapse114Run(StringsConnSynapse114* me);

#endif // STRINGS_CONN_SYNAPSE114_H_