#ifndef STRINGS_CONN_SYNAPSE346_H_
#define STRINGS_CONN_SYNAPSE346_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse346 States
enum StringsConnSynapse346States {
    STRINGS_CONN_SYNAPSE346_L,
};

// strings_conn_synapse346 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse346States state;
} StringsConnSynapse346;

// strings_conn_synapse346 Initialisation function
void StringsConnSynapse346Init(StringsConnSynapse346* me);

// strings_conn_synapse346 Execution function
void StringsConnSynapse346Run(StringsConnSynapse346* me);

#endif // STRINGS_CONN_SYNAPSE346_H_