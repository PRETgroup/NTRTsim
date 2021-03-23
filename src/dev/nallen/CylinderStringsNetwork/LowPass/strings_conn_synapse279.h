#ifndef STRINGS_CONN_SYNAPSE279_H_
#define STRINGS_CONN_SYNAPSE279_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse279 States
enum StringsConnSynapse279States {
    STRINGS_CONN_SYNAPSE279_L,
};

// strings_conn_synapse279 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse279States state;
} StringsConnSynapse279;

// strings_conn_synapse279 Initialisation function
void StringsConnSynapse279Init(StringsConnSynapse279* me);

// strings_conn_synapse279 Execution function
void StringsConnSynapse279Run(StringsConnSynapse279* me);

#endif // STRINGS_CONN_SYNAPSE279_H_