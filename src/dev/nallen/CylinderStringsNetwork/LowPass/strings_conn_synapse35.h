#ifndef STRINGS_CONN_SYNAPSE35_H_
#define STRINGS_CONN_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse35 States
enum StringsConnSynapse35States {
    STRINGS_CONN_SYNAPSE35_L,
};

// strings_conn_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse35States state;
} StringsConnSynapse35;

// strings_conn_synapse35 Initialisation function
void StringsConnSynapse35Init(StringsConnSynapse35* me);

// strings_conn_synapse35 Execution function
void StringsConnSynapse35Run(StringsConnSynapse35* me);

#endif // STRINGS_CONN_SYNAPSE35_H_