#ifndef STRINGS_CONN_SYNAPSE47_H_
#define STRINGS_CONN_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse47 States
enum StringsConnSynapse47States {
    STRINGS_CONN_SYNAPSE47_L,
};

// strings_conn_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse47States state;
} StringsConnSynapse47;

// strings_conn_synapse47 Initialisation function
void StringsConnSynapse47Init(StringsConnSynapse47* me);

// strings_conn_synapse47 Execution function
void StringsConnSynapse47Run(StringsConnSynapse47* me);

#endif // STRINGS_CONN_SYNAPSE47_H_