#ifndef STRINGS_CONN_SYNAPSE194_H_
#define STRINGS_CONN_SYNAPSE194_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse194 States
enum StringsConnSynapse194States {
    STRINGS_CONN_SYNAPSE194_L,
};

// strings_conn_synapse194 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse194States state;
} StringsConnSynapse194;

// strings_conn_synapse194 Initialisation function
void StringsConnSynapse194Init(StringsConnSynapse194* me);

// strings_conn_synapse194 Execution function
void StringsConnSynapse194Run(StringsConnSynapse194* me);

#endif // STRINGS_CONN_SYNAPSE194_H_