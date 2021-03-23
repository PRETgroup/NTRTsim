#ifndef STRINGS_CONN_SYNAPSE200_H_
#define STRINGS_CONN_SYNAPSE200_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse200 States
enum StringsConnSynapse200States {
    STRINGS_CONN_SYNAPSE200_L,
};

// strings_conn_synapse200 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse200States state;
} StringsConnSynapse200;

// strings_conn_synapse200 Initialisation function
void StringsConnSynapse200Init(StringsConnSynapse200* me);

// strings_conn_synapse200 Execution function
void StringsConnSynapse200Run(StringsConnSynapse200* me);

#endif // STRINGS_CONN_SYNAPSE200_H_