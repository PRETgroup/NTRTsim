#ifndef STRINGS_CONN_SYNAPSE33_H_
#define STRINGS_CONN_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse33 States
enum StringsConnSynapse33States {
    STRINGS_CONN_SYNAPSE33_L,
};

// strings_conn_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse33States state;
} StringsConnSynapse33;

// strings_conn_synapse33 Initialisation function
void StringsConnSynapse33Init(StringsConnSynapse33* me);

// strings_conn_synapse33 Execution function
void StringsConnSynapse33Run(StringsConnSynapse33* me);

#endif // STRINGS_CONN_SYNAPSE33_H_