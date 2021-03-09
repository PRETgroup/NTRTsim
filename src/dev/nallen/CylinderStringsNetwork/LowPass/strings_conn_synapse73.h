#ifndef STRINGS_CONN_SYNAPSE73_H_
#define STRINGS_CONN_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse73 States
enum StringsConnSynapse73States {
    STRINGS_CONN_SYNAPSE73_L,
};

// strings_conn_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse73States state;
} StringsConnSynapse73;

// strings_conn_synapse73 Initialisation function
void StringsConnSynapse73Init(StringsConnSynapse73* me);

// strings_conn_synapse73 Execution function
void StringsConnSynapse73Run(StringsConnSynapse73* me);

#endif // STRINGS_CONN_SYNAPSE73_H_