#ifndef STRINGS_CONN_SYNAPSE247_H_
#define STRINGS_CONN_SYNAPSE247_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse247 States
enum StringsConnSynapse247States {
    STRINGS_CONN_SYNAPSE247_L,
};

// strings_conn_synapse247 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse247States state;
} StringsConnSynapse247;

// strings_conn_synapse247 Initialisation function
void StringsConnSynapse247Init(StringsConnSynapse247* me);

// strings_conn_synapse247 Execution function
void StringsConnSynapse247Run(StringsConnSynapse247* me);

#endif // STRINGS_CONN_SYNAPSE247_H_