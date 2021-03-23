#ifndef STRINGS_CONN_SYNAPSE275_H_
#define STRINGS_CONN_SYNAPSE275_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse275 States
enum StringsConnSynapse275States {
    STRINGS_CONN_SYNAPSE275_L,
};

// strings_conn_synapse275 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse275States state;
} StringsConnSynapse275;

// strings_conn_synapse275 Initialisation function
void StringsConnSynapse275Init(StringsConnSynapse275* me);

// strings_conn_synapse275 Execution function
void StringsConnSynapse275Run(StringsConnSynapse275* me);

#endif // STRINGS_CONN_SYNAPSE275_H_