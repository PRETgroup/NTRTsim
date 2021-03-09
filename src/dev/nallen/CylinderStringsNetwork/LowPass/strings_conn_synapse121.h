#ifndef STRINGS_CONN_SYNAPSE121_H_
#define STRINGS_CONN_SYNAPSE121_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse121 States
enum StringsConnSynapse121States {
    STRINGS_CONN_SYNAPSE121_L,
};

// strings_conn_synapse121 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse121States state;
} StringsConnSynapse121;

// strings_conn_synapse121 Initialisation function
void StringsConnSynapse121Init(StringsConnSynapse121* me);

// strings_conn_synapse121 Execution function
void StringsConnSynapse121Run(StringsConnSynapse121* me);

#endif // STRINGS_CONN_SYNAPSE121_H_