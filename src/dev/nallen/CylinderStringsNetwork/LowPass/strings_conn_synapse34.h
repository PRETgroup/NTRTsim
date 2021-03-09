#ifndef STRINGS_CONN_SYNAPSE34_H_
#define STRINGS_CONN_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse34 States
enum StringsConnSynapse34States {
    STRINGS_CONN_SYNAPSE34_L,
};

// strings_conn_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse34States state;
} StringsConnSynapse34;

// strings_conn_synapse34 Initialisation function
void StringsConnSynapse34Init(StringsConnSynapse34* me);

// strings_conn_synapse34 Execution function
void StringsConnSynapse34Run(StringsConnSynapse34* me);

#endif // STRINGS_CONN_SYNAPSE34_H_