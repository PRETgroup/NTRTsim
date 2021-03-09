#ifndef STRINGS_CONN_SYNAPSE31_H_
#define STRINGS_CONN_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse31 States
enum StringsConnSynapse31States {
    STRINGS_CONN_SYNAPSE31_L,
};

// strings_conn_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse31States state;
} StringsConnSynapse31;

// strings_conn_synapse31 Initialisation function
void StringsConnSynapse31Init(StringsConnSynapse31* me);

// strings_conn_synapse31 Execution function
void StringsConnSynapse31Run(StringsConnSynapse31* me);

#endif // STRINGS_CONN_SYNAPSE31_H_