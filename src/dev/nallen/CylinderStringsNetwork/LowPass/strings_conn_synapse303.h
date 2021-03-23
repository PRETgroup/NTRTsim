#ifndef STRINGS_CONN_SYNAPSE303_H_
#define STRINGS_CONN_SYNAPSE303_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse303 States
enum StringsConnSynapse303States {
    STRINGS_CONN_SYNAPSE303_L,
};

// strings_conn_synapse303 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse303States state;
} StringsConnSynapse303;

// strings_conn_synapse303 Initialisation function
void StringsConnSynapse303Init(StringsConnSynapse303* me);

// strings_conn_synapse303 Execution function
void StringsConnSynapse303Run(StringsConnSynapse303* me);

#endif // STRINGS_CONN_SYNAPSE303_H_