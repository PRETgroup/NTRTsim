#ifndef STRINGS_CONN_SYNAPSE290_H_
#define STRINGS_CONN_SYNAPSE290_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse290 States
enum StringsConnSynapse290States {
    STRINGS_CONN_SYNAPSE290_L,
};

// strings_conn_synapse290 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse290States state;
} StringsConnSynapse290;

// strings_conn_synapse290 Initialisation function
void StringsConnSynapse290Init(StringsConnSynapse290* me);

// strings_conn_synapse290 Execution function
void StringsConnSynapse290Run(StringsConnSynapse290* me);

#endif // STRINGS_CONN_SYNAPSE290_H_