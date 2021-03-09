#ifndef STRINGS_CONN_SYNAPSE151_H_
#define STRINGS_CONN_SYNAPSE151_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse151 States
enum StringsConnSynapse151States {
    STRINGS_CONN_SYNAPSE151_L,
};

// strings_conn_synapse151 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse151States state;
} StringsConnSynapse151;

// strings_conn_synapse151 Initialisation function
void StringsConnSynapse151Init(StringsConnSynapse151* me);

// strings_conn_synapse151 Execution function
void StringsConnSynapse151Run(StringsConnSynapse151* me);

#endif // STRINGS_CONN_SYNAPSE151_H_