#ifndef STRINGS_CONN_SYNAPSE125_H_
#define STRINGS_CONN_SYNAPSE125_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse125 States
enum StringsConnSynapse125States {
    STRINGS_CONN_SYNAPSE125_L,
};

// strings_conn_synapse125 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse125States state;
} StringsConnSynapse125;

// strings_conn_synapse125 Initialisation function
void StringsConnSynapse125Init(StringsConnSynapse125* me);

// strings_conn_synapse125 Execution function
void StringsConnSynapse125Run(StringsConnSynapse125* me);

#endif // STRINGS_CONN_SYNAPSE125_H_