#ifndef STRINGS_CONN_SYNAPSE394_H_
#define STRINGS_CONN_SYNAPSE394_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse394 States
enum StringsConnSynapse394States {
    STRINGS_CONN_SYNAPSE394_L,
};

// strings_conn_synapse394 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse394States state;
} StringsConnSynapse394;

// strings_conn_synapse394 Initialisation function
void StringsConnSynapse394Init(StringsConnSynapse394* me);

// strings_conn_synapse394 Execution function
void StringsConnSynapse394Run(StringsConnSynapse394* me);

#endif // STRINGS_CONN_SYNAPSE394_H_