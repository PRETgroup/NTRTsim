#ifndef STRINGS_CONN_SYNAPSE20_H_
#define STRINGS_CONN_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse20 States
enum StringsConnSynapse20States {
    STRINGS_CONN_SYNAPSE20_L,
};

// strings_conn_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse20States state;
} StringsConnSynapse20;

// strings_conn_synapse20 Initialisation function
void StringsConnSynapse20Init(StringsConnSynapse20* me);

// strings_conn_synapse20 Execution function
void StringsConnSynapse20Run(StringsConnSynapse20* me);

#endif // STRINGS_CONN_SYNAPSE20_H_