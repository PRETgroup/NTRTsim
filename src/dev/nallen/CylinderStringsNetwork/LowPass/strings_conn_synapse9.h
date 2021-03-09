#ifndef STRINGS_CONN_SYNAPSE9_H_
#define STRINGS_CONN_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse9 States
enum StringsConnSynapse9States {
    STRINGS_CONN_SYNAPSE9_L,
};

// strings_conn_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse9States state;
} StringsConnSynapse9;

// strings_conn_synapse9 Initialisation function
void StringsConnSynapse9Init(StringsConnSynapse9* me);

// strings_conn_synapse9 Execution function
void StringsConnSynapse9Run(StringsConnSynapse9* me);

#endif // STRINGS_CONN_SYNAPSE9_H_