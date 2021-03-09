#ifndef STRINGS_CONN_SYNAPSE157_H_
#define STRINGS_CONN_SYNAPSE157_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse157 States
enum StringsConnSynapse157States {
    STRINGS_CONN_SYNAPSE157_L,
};

// strings_conn_synapse157 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse157States state;
} StringsConnSynapse157;

// strings_conn_synapse157 Initialisation function
void StringsConnSynapse157Init(StringsConnSynapse157* me);

// strings_conn_synapse157 Execution function
void StringsConnSynapse157Run(StringsConnSynapse157* me);

#endif // STRINGS_CONN_SYNAPSE157_H_