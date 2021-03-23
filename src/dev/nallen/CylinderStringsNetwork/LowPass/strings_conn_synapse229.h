#ifndef STRINGS_CONN_SYNAPSE229_H_
#define STRINGS_CONN_SYNAPSE229_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse229 States
enum StringsConnSynapse229States {
    STRINGS_CONN_SYNAPSE229_L,
};

// strings_conn_synapse229 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse229States state;
} StringsConnSynapse229;

// strings_conn_synapse229 Initialisation function
void StringsConnSynapse229Init(StringsConnSynapse229* me);

// strings_conn_synapse229 Execution function
void StringsConnSynapse229Run(StringsConnSynapse229* me);

#endif // STRINGS_CONN_SYNAPSE229_H_