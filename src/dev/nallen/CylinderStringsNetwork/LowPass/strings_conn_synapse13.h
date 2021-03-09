#ifndef STRINGS_CONN_SYNAPSE13_H_
#define STRINGS_CONN_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse13 States
enum StringsConnSynapse13States {
    STRINGS_CONN_SYNAPSE13_L,
};

// strings_conn_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse13States state;
} StringsConnSynapse13;

// strings_conn_synapse13 Initialisation function
void StringsConnSynapse13Init(StringsConnSynapse13* me);

// strings_conn_synapse13 Execution function
void StringsConnSynapse13Run(StringsConnSynapse13* me);

#endif // STRINGS_CONN_SYNAPSE13_H_