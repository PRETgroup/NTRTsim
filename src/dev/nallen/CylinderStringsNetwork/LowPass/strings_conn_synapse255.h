#ifndef STRINGS_CONN_SYNAPSE255_H_
#define STRINGS_CONN_SYNAPSE255_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse255 States
enum StringsConnSynapse255States {
    STRINGS_CONN_SYNAPSE255_L,
};

// strings_conn_synapse255 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse255States state;
} StringsConnSynapse255;

// strings_conn_synapse255 Initialisation function
void StringsConnSynapse255Init(StringsConnSynapse255* me);

// strings_conn_synapse255 Execution function
void StringsConnSynapse255Run(StringsConnSynapse255* me);

#endif // STRINGS_CONN_SYNAPSE255_H_