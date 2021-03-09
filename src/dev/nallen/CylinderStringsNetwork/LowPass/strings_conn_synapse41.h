#ifndef STRINGS_CONN_SYNAPSE41_H_
#define STRINGS_CONN_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse41 States
enum StringsConnSynapse41States {
    STRINGS_CONN_SYNAPSE41_L,
};

// strings_conn_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse41States state;
} StringsConnSynapse41;

// strings_conn_synapse41 Initialisation function
void StringsConnSynapse41Init(StringsConnSynapse41* me);

// strings_conn_synapse41 Execution function
void StringsConnSynapse41Run(StringsConnSynapse41* me);

#endif // STRINGS_CONN_SYNAPSE41_H_