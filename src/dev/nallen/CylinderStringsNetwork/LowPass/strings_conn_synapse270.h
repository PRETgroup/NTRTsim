#ifndef STRINGS_CONN_SYNAPSE270_H_
#define STRINGS_CONN_SYNAPSE270_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse270 States
enum StringsConnSynapse270States {
    STRINGS_CONN_SYNAPSE270_L,
};

// strings_conn_synapse270 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse270States state;
} StringsConnSynapse270;

// strings_conn_synapse270 Initialisation function
void StringsConnSynapse270Init(StringsConnSynapse270* me);

// strings_conn_synapse270 Execution function
void StringsConnSynapse270Run(StringsConnSynapse270* me);

#endif // STRINGS_CONN_SYNAPSE270_H_