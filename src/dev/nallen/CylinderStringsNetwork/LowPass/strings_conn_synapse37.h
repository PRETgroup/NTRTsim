#ifndef STRINGS_CONN_SYNAPSE37_H_
#define STRINGS_CONN_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse37 States
enum StringsConnSynapse37States {
    STRINGS_CONN_SYNAPSE37_L,
};

// strings_conn_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse37States state;
} StringsConnSynapse37;

// strings_conn_synapse37 Initialisation function
void StringsConnSynapse37Init(StringsConnSynapse37* me);

// strings_conn_synapse37 Execution function
void StringsConnSynapse37Run(StringsConnSynapse37* me);

#endif // STRINGS_CONN_SYNAPSE37_H_