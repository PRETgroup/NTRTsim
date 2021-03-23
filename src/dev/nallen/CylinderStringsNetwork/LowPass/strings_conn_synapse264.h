#ifndef STRINGS_CONN_SYNAPSE264_H_
#define STRINGS_CONN_SYNAPSE264_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse264 States
enum StringsConnSynapse264States {
    STRINGS_CONN_SYNAPSE264_L,
};

// strings_conn_synapse264 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse264States state;
} StringsConnSynapse264;

// strings_conn_synapse264 Initialisation function
void StringsConnSynapse264Init(StringsConnSynapse264* me);

// strings_conn_synapse264 Execution function
void StringsConnSynapse264Run(StringsConnSynapse264* me);

#endif // STRINGS_CONN_SYNAPSE264_H_