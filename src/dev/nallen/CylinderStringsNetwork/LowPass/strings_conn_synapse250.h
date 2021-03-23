#ifndef STRINGS_CONN_SYNAPSE250_H_
#define STRINGS_CONN_SYNAPSE250_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse250 States
enum StringsConnSynapse250States {
    STRINGS_CONN_SYNAPSE250_L,
};

// strings_conn_synapse250 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse250States state;
} StringsConnSynapse250;

// strings_conn_synapse250 Initialisation function
void StringsConnSynapse250Init(StringsConnSynapse250* me);

// strings_conn_synapse250 Execution function
void StringsConnSynapse250Run(StringsConnSynapse250* me);

#endif // STRINGS_CONN_SYNAPSE250_H_