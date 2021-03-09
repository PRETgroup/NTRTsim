#ifndef STRINGS_CONN_SYNAPSE152_H_
#define STRINGS_CONN_SYNAPSE152_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse152 States
enum StringsConnSynapse152States {
    STRINGS_CONN_SYNAPSE152_L,
};

// strings_conn_synapse152 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse152States state;
} StringsConnSynapse152;

// strings_conn_synapse152 Initialisation function
void StringsConnSynapse152Init(StringsConnSynapse152* me);

// strings_conn_synapse152 Execution function
void StringsConnSynapse152Run(StringsConnSynapse152* me);

#endif // STRINGS_CONN_SYNAPSE152_H_