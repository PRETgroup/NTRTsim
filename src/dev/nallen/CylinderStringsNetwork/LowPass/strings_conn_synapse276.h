#ifndef STRINGS_CONN_SYNAPSE276_H_
#define STRINGS_CONN_SYNAPSE276_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse276 States
enum StringsConnSynapse276States {
    STRINGS_CONN_SYNAPSE276_L,
};

// strings_conn_synapse276 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse276States state;
} StringsConnSynapse276;

// strings_conn_synapse276 Initialisation function
void StringsConnSynapse276Init(StringsConnSynapse276* me);

// strings_conn_synapse276 Execution function
void StringsConnSynapse276Run(StringsConnSynapse276* me);

#endif // STRINGS_CONN_SYNAPSE276_H_