#ifndef STRINGS_CONN_SYNAPSE381_H_
#define STRINGS_CONN_SYNAPSE381_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse381 States
enum StringsConnSynapse381States {
    STRINGS_CONN_SYNAPSE381_L,
};

// strings_conn_synapse381 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse381States state;
} StringsConnSynapse381;

// strings_conn_synapse381 Initialisation function
void StringsConnSynapse381Init(StringsConnSynapse381* me);

// strings_conn_synapse381 Execution function
void StringsConnSynapse381Run(StringsConnSynapse381* me);

#endif // STRINGS_CONN_SYNAPSE381_H_