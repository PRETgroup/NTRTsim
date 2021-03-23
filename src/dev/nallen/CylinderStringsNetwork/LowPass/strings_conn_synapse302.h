#ifndef STRINGS_CONN_SYNAPSE302_H_
#define STRINGS_CONN_SYNAPSE302_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse302 States
enum StringsConnSynapse302States {
    STRINGS_CONN_SYNAPSE302_L,
};

// strings_conn_synapse302 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse302States state;
} StringsConnSynapse302;

// strings_conn_synapse302 Initialisation function
void StringsConnSynapse302Init(StringsConnSynapse302* me);

// strings_conn_synapse302 Execution function
void StringsConnSynapse302Run(StringsConnSynapse302* me);

#endif // STRINGS_CONN_SYNAPSE302_H_