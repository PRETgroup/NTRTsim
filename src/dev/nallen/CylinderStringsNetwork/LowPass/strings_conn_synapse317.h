#ifndef STRINGS_CONN_SYNAPSE317_H_
#define STRINGS_CONN_SYNAPSE317_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse317 States
enum StringsConnSynapse317States {
    STRINGS_CONN_SYNAPSE317_L,
};

// strings_conn_synapse317 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse317States state;
} StringsConnSynapse317;

// strings_conn_synapse317 Initialisation function
void StringsConnSynapse317Init(StringsConnSynapse317* me);

// strings_conn_synapse317 Execution function
void StringsConnSynapse317Run(StringsConnSynapse317* me);

#endif // STRINGS_CONN_SYNAPSE317_H_