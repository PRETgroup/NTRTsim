#ifndef STRINGS_CONN_SYNAPSE8_H_
#define STRINGS_CONN_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse8 States
enum StringsConnSynapse8States {
    STRINGS_CONN_SYNAPSE8_L,
};

// strings_conn_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse8States state;
} StringsConnSynapse8;

// strings_conn_synapse8 Initialisation function
void StringsConnSynapse8Init(StringsConnSynapse8* me);

// strings_conn_synapse8 Execution function
void StringsConnSynapse8Run(StringsConnSynapse8* me);

#endif // STRINGS_CONN_SYNAPSE8_H_