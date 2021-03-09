#ifndef STRINGS_CONN_SYNAPSE79_H_
#define STRINGS_CONN_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse79 States
enum StringsConnSynapse79States {
    STRINGS_CONN_SYNAPSE79_L,
};

// strings_conn_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse79States state;
} StringsConnSynapse79;

// strings_conn_synapse79 Initialisation function
void StringsConnSynapse79Init(StringsConnSynapse79* me);

// strings_conn_synapse79 Execution function
void StringsConnSynapse79Run(StringsConnSynapse79* me);

#endif // STRINGS_CONN_SYNAPSE79_H_