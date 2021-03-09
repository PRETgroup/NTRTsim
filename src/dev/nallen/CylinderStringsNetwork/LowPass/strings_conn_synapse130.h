#ifndef STRINGS_CONN_SYNAPSE130_H_
#define STRINGS_CONN_SYNAPSE130_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse130 States
enum StringsConnSynapse130States {
    STRINGS_CONN_SYNAPSE130_L,
};

// strings_conn_synapse130 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse130States state;
} StringsConnSynapse130;

// strings_conn_synapse130 Initialisation function
void StringsConnSynapse130Init(StringsConnSynapse130* me);

// strings_conn_synapse130 Execution function
void StringsConnSynapse130Run(StringsConnSynapse130* me);

#endif // STRINGS_CONN_SYNAPSE130_H_