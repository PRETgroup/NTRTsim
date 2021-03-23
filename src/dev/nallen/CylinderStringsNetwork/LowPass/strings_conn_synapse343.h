#ifndef STRINGS_CONN_SYNAPSE343_H_
#define STRINGS_CONN_SYNAPSE343_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse343 States
enum StringsConnSynapse343States {
    STRINGS_CONN_SYNAPSE343_L,
};

// strings_conn_synapse343 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse343States state;
} StringsConnSynapse343;

// strings_conn_synapse343 Initialisation function
void StringsConnSynapse343Init(StringsConnSynapse343* me);

// strings_conn_synapse343 Execution function
void StringsConnSynapse343Run(StringsConnSynapse343* me);

#endif // STRINGS_CONN_SYNAPSE343_H_