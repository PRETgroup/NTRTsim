#ifndef STRINGS_CONN_SYNAPSE306_H_
#define STRINGS_CONN_SYNAPSE306_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse306 States
enum StringsConnSynapse306States {
    STRINGS_CONN_SYNAPSE306_L,
};

// strings_conn_synapse306 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse306States state;
} StringsConnSynapse306;

// strings_conn_synapse306 Initialisation function
void StringsConnSynapse306Init(StringsConnSynapse306* me);

// strings_conn_synapse306 Execution function
void StringsConnSynapse306Run(StringsConnSynapse306* me);

#endif // STRINGS_CONN_SYNAPSE306_H_