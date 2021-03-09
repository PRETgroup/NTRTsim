#ifndef STRINGS_CONN_SYNAPSE128_H_
#define STRINGS_CONN_SYNAPSE128_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse128 States
enum StringsConnSynapse128States {
    STRINGS_CONN_SYNAPSE128_L,
};

// strings_conn_synapse128 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse128States state;
} StringsConnSynapse128;

// strings_conn_synapse128 Initialisation function
void StringsConnSynapse128Init(StringsConnSynapse128* me);

// strings_conn_synapse128 Execution function
void StringsConnSynapse128Run(StringsConnSynapse128* me);

#endif // STRINGS_CONN_SYNAPSE128_H_