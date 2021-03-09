#ifndef STRINGS_CONN_SYNAPSE43_H_
#define STRINGS_CONN_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse43 States
enum StringsConnSynapse43States {
    STRINGS_CONN_SYNAPSE43_L,
};

// strings_conn_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse43States state;
} StringsConnSynapse43;

// strings_conn_synapse43 Initialisation function
void StringsConnSynapse43Init(StringsConnSynapse43* me);

// strings_conn_synapse43 Execution function
void StringsConnSynapse43Run(StringsConnSynapse43* me);

#endif // STRINGS_CONN_SYNAPSE43_H_