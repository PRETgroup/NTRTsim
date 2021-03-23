#ifndef STRINGS_CONN_SYNAPSE363_H_
#define STRINGS_CONN_SYNAPSE363_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse363 States
enum StringsConnSynapse363States {
    STRINGS_CONN_SYNAPSE363_L,
};

// strings_conn_synapse363 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse363States state;
} StringsConnSynapse363;

// strings_conn_synapse363 Initialisation function
void StringsConnSynapse363Init(StringsConnSynapse363* me);

// strings_conn_synapse363 Execution function
void StringsConnSynapse363Run(StringsConnSynapse363* me);

#endif // STRINGS_CONN_SYNAPSE363_H_