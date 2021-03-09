#ifndef STRINGS_CONN_SYNAPSE64_H_
#define STRINGS_CONN_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse64 States
enum StringsConnSynapse64States {
    STRINGS_CONN_SYNAPSE64_L,
};

// strings_conn_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse64States state;
} StringsConnSynapse64;

// strings_conn_synapse64 Initialisation function
void StringsConnSynapse64Init(StringsConnSynapse64* me);

// strings_conn_synapse64 Execution function
void StringsConnSynapse64Run(StringsConnSynapse64* me);

#endif // STRINGS_CONN_SYNAPSE64_H_