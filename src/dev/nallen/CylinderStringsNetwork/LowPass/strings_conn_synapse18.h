#ifndef STRINGS_CONN_SYNAPSE18_H_
#define STRINGS_CONN_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse18 States
enum StringsConnSynapse18States {
    STRINGS_CONN_SYNAPSE18_L,
};

// strings_conn_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse18States state;
} StringsConnSynapse18;

// strings_conn_synapse18 Initialisation function
void StringsConnSynapse18Init(StringsConnSynapse18* me);

// strings_conn_synapse18 Execution function
void StringsConnSynapse18Run(StringsConnSynapse18* me);

#endif // STRINGS_CONN_SYNAPSE18_H_