#ifndef STRINGS_CONN_SYNAPSE156_H_
#define STRINGS_CONN_SYNAPSE156_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse156 States
enum StringsConnSynapse156States {
    STRINGS_CONN_SYNAPSE156_L,
};

// strings_conn_synapse156 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse156States state;
} StringsConnSynapse156;

// strings_conn_synapse156 Initialisation function
void StringsConnSynapse156Init(StringsConnSynapse156* me);

// strings_conn_synapse156 Execution function
void StringsConnSynapse156Run(StringsConnSynapse156* me);

#endif // STRINGS_CONN_SYNAPSE156_H_