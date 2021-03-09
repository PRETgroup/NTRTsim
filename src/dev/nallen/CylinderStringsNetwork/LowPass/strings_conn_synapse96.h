#ifndef STRINGS_CONN_SYNAPSE96_H_
#define STRINGS_CONN_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse96 States
enum StringsConnSynapse96States {
    STRINGS_CONN_SYNAPSE96_L,
};

// strings_conn_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse96States state;
} StringsConnSynapse96;

// strings_conn_synapse96 Initialisation function
void StringsConnSynapse96Init(StringsConnSynapse96* me);

// strings_conn_synapse96 Execution function
void StringsConnSynapse96Run(StringsConnSynapse96* me);

#endif // STRINGS_CONN_SYNAPSE96_H_