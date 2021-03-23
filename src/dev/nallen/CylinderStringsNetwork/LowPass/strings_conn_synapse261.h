#ifndef STRINGS_CONN_SYNAPSE261_H_
#define STRINGS_CONN_SYNAPSE261_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse261 States
enum StringsConnSynapse261States {
    STRINGS_CONN_SYNAPSE261_L,
};

// strings_conn_synapse261 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse261States state;
} StringsConnSynapse261;

// strings_conn_synapse261 Initialisation function
void StringsConnSynapse261Init(StringsConnSynapse261* me);

// strings_conn_synapse261 Execution function
void StringsConnSynapse261Run(StringsConnSynapse261* me);

#endif // STRINGS_CONN_SYNAPSE261_H_