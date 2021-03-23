#ifndef STRINGS_CONN_SYNAPSE333_H_
#define STRINGS_CONN_SYNAPSE333_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse333 States
enum StringsConnSynapse333States {
    STRINGS_CONN_SYNAPSE333_L,
};

// strings_conn_synapse333 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse333States state;
} StringsConnSynapse333;

// strings_conn_synapse333 Initialisation function
void StringsConnSynapse333Init(StringsConnSynapse333* me);

// strings_conn_synapse333 Execution function
void StringsConnSynapse333Run(StringsConnSynapse333* me);

#endif // STRINGS_CONN_SYNAPSE333_H_