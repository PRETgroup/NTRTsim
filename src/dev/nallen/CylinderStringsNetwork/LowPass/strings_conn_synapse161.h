#ifndef STRINGS_CONN_SYNAPSE161_H_
#define STRINGS_CONN_SYNAPSE161_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse161 States
enum StringsConnSynapse161States {
    STRINGS_CONN_SYNAPSE161_L,
};

// strings_conn_synapse161 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse161States state;
} StringsConnSynapse161;

// strings_conn_synapse161 Initialisation function
void StringsConnSynapse161Init(StringsConnSynapse161* me);

// strings_conn_synapse161 Execution function
void StringsConnSynapse161Run(StringsConnSynapse161* me);

#endif // STRINGS_CONN_SYNAPSE161_H_