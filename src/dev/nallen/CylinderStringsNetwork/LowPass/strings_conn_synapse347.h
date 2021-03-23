#ifndef STRINGS_CONN_SYNAPSE347_H_
#define STRINGS_CONN_SYNAPSE347_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse347 States
enum StringsConnSynapse347States {
    STRINGS_CONN_SYNAPSE347_L,
};

// strings_conn_synapse347 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse347States state;
} StringsConnSynapse347;

// strings_conn_synapse347 Initialisation function
void StringsConnSynapse347Init(StringsConnSynapse347* me);

// strings_conn_synapse347 Execution function
void StringsConnSynapse347Run(StringsConnSynapse347* me);

#endif // STRINGS_CONN_SYNAPSE347_H_