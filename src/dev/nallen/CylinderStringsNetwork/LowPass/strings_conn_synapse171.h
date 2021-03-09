#ifndef STRINGS_CONN_SYNAPSE171_H_
#define STRINGS_CONN_SYNAPSE171_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse171 States
enum StringsConnSynapse171States {
    STRINGS_CONN_SYNAPSE171_L,
};

// strings_conn_synapse171 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse171States state;
} StringsConnSynapse171;

// strings_conn_synapse171 Initialisation function
void StringsConnSynapse171Init(StringsConnSynapse171* me);

// strings_conn_synapse171 Execution function
void StringsConnSynapse171Run(StringsConnSynapse171* me);

#endif // STRINGS_CONN_SYNAPSE171_H_