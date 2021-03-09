#ifndef STRINGS_CONN_SYNAPSE49_H_
#define STRINGS_CONN_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse49 States
enum StringsConnSynapse49States {
    STRINGS_CONN_SYNAPSE49_L,
};

// strings_conn_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse49States state;
} StringsConnSynapse49;

// strings_conn_synapse49 Initialisation function
void StringsConnSynapse49Init(StringsConnSynapse49* me);

// strings_conn_synapse49 Execution function
void StringsConnSynapse49Run(StringsConnSynapse49* me);

#endif // STRINGS_CONN_SYNAPSE49_H_