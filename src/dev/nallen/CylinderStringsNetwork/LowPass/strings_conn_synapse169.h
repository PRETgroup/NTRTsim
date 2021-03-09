#ifndef STRINGS_CONN_SYNAPSE169_H_
#define STRINGS_CONN_SYNAPSE169_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse169 States
enum StringsConnSynapse169States {
    STRINGS_CONN_SYNAPSE169_L,
};

// strings_conn_synapse169 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse169States state;
} StringsConnSynapse169;

// strings_conn_synapse169 Initialisation function
void StringsConnSynapse169Init(StringsConnSynapse169* me);

// strings_conn_synapse169 Execution function
void StringsConnSynapse169Run(StringsConnSynapse169* me);

#endif // STRINGS_CONN_SYNAPSE169_H_