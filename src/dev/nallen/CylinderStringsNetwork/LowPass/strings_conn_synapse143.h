#ifndef STRINGS_CONN_SYNAPSE143_H_
#define STRINGS_CONN_SYNAPSE143_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse143 States
enum StringsConnSynapse143States {
    STRINGS_CONN_SYNAPSE143_L,
};

// strings_conn_synapse143 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse143States state;
} StringsConnSynapse143;

// strings_conn_synapse143 Initialisation function
void StringsConnSynapse143Init(StringsConnSynapse143* me);

// strings_conn_synapse143 Execution function
void StringsConnSynapse143Run(StringsConnSynapse143* me);

#endif // STRINGS_CONN_SYNAPSE143_H_