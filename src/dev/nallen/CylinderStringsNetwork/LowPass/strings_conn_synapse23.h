#ifndef STRINGS_CONN_SYNAPSE23_H_
#define STRINGS_CONN_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse23 States
enum StringsConnSynapse23States {
    STRINGS_CONN_SYNAPSE23_L,
};

// strings_conn_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse23States state;
} StringsConnSynapse23;

// strings_conn_synapse23 Initialisation function
void StringsConnSynapse23Init(StringsConnSynapse23* me);

// strings_conn_synapse23 Execution function
void StringsConnSynapse23Run(StringsConnSynapse23* me);

#endif // STRINGS_CONN_SYNAPSE23_H_