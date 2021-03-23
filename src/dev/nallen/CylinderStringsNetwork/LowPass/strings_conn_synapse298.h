#ifndef STRINGS_CONN_SYNAPSE298_H_
#define STRINGS_CONN_SYNAPSE298_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse298 States
enum StringsConnSynapse298States {
    STRINGS_CONN_SYNAPSE298_L,
};

// strings_conn_synapse298 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse298States state;
} StringsConnSynapse298;

// strings_conn_synapse298 Initialisation function
void StringsConnSynapse298Init(StringsConnSynapse298* me);

// strings_conn_synapse298 Execution function
void StringsConnSynapse298Run(StringsConnSynapse298* me);

#endif // STRINGS_CONN_SYNAPSE298_H_