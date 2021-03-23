#ifndef STRINGS_CONN_SYNAPSE228_H_
#define STRINGS_CONN_SYNAPSE228_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse228 States
enum StringsConnSynapse228States {
    STRINGS_CONN_SYNAPSE228_L,
};

// strings_conn_synapse228 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse228States state;
} StringsConnSynapse228;

// strings_conn_synapse228 Initialisation function
void StringsConnSynapse228Init(StringsConnSynapse228* me);

// strings_conn_synapse228 Execution function
void StringsConnSynapse228Run(StringsConnSynapse228* me);

#endif // STRINGS_CONN_SYNAPSE228_H_