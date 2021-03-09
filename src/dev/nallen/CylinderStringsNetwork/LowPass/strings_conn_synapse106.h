#ifndef STRINGS_CONN_SYNAPSE106_H_
#define STRINGS_CONN_SYNAPSE106_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse106 States
enum StringsConnSynapse106States {
    STRINGS_CONN_SYNAPSE106_L,
};

// strings_conn_synapse106 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse106States state;
} StringsConnSynapse106;

// strings_conn_synapse106 Initialisation function
void StringsConnSynapse106Init(StringsConnSynapse106* me);

// strings_conn_synapse106 Execution function
void StringsConnSynapse106Run(StringsConnSynapse106* me);

#endif // STRINGS_CONN_SYNAPSE106_H_