#ifndef STRINGS_CONN_SYNAPSE328_H_
#define STRINGS_CONN_SYNAPSE328_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse328 States
enum StringsConnSynapse328States {
    STRINGS_CONN_SYNAPSE328_L,
};

// strings_conn_synapse328 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse328States state;
} StringsConnSynapse328;

// strings_conn_synapse328 Initialisation function
void StringsConnSynapse328Init(StringsConnSynapse328* me);

// strings_conn_synapse328 Execution function
void StringsConnSynapse328Run(StringsConnSynapse328* me);

#endif // STRINGS_CONN_SYNAPSE328_H_