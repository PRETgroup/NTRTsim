#ifndef STRINGS_CONN_SYNAPSE89_H_
#define STRINGS_CONN_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse89 States
enum StringsConnSynapse89States {
    STRINGS_CONN_SYNAPSE89_L,
};

// strings_conn_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse89States state;
} StringsConnSynapse89;

// strings_conn_synapse89 Initialisation function
void StringsConnSynapse89Init(StringsConnSynapse89* me);

// strings_conn_synapse89 Execution function
void StringsConnSynapse89Run(StringsConnSynapse89* me);

#endif // STRINGS_CONN_SYNAPSE89_H_