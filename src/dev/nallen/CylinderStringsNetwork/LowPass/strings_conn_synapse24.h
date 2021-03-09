#ifndef STRINGS_CONN_SYNAPSE24_H_
#define STRINGS_CONN_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse24 States
enum StringsConnSynapse24States {
    STRINGS_CONN_SYNAPSE24_L,
};

// strings_conn_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse24States state;
} StringsConnSynapse24;

// strings_conn_synapse24 Initialisation function
void StringsConnSynapse24Init(StringsConnSynapse24* me);

// strings_conn_synapse24 Execution function
void StringsConnSynapse24Run(StringsConnSynapse24* me);

#endif // STRINGS_CONN_SYNAPSE24_H_