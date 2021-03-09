#ifndef STRINGS_CONN_SYNAPSE0_H_
#define STRINGS_CONN_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse0 States
enum StringsConnSynapse0States {
    STRINGS_CONN_SYNAPSE0_L,
};

// strings_conn_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse0States state;
} StringsConnSynapse0;

// strings_conn_synapse0 Initialisation function
void StringsConnSynapse0Init(StringsConnSynapse0* me);

// strings_conn_synapse0 Execution function
void StringsConnSynapse0Run(StringsConnSynapse0* me);

#endif // STRINGS_CONN_SYNAPSE0_H_