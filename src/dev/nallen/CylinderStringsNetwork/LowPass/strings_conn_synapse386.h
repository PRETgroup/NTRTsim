#ifndef STRINGS_CONN_SYNAPSE386_H_
#define STRINGS_CONN_SYNAPSE386_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse386 States
enum StringsConnSynapse386States {
    STRINGS_CONN_SYNAPSE386_L,
};

// strings_conn_synapse386 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse386States state;
} StringsConnSynapse386;

// strings_conn_synapse386 Initialisation function
void StringsConnSynapse386Init(StringsConnSynapse386* me);

// strings_conn_synapse386 Execution function
void StringsConnSynapse386Run(StringsConnSynapse386* me);

#endif // STRINGS_CONN_SYNAPSE386_H_