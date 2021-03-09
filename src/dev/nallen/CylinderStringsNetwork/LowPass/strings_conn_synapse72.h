#ifndef STRINGS_CONN_SYNAPSE72_H_
#define STRINGS_CONN_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse72 States
enum StringsConnSynapse72States {
    STRINGS_CONN_SYNAPSE72_L,
};

// strings_conn_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse72States state;
} StringsConnSynapse72;

// strings_conn_synapse72 Initialisation function
void StringsConnSynapse72Init(StringsConnSynapse72* me);

// strings_conn_synapse72 Execution function
void StringsConnSynapse72Run(StringsConnSynapse72* me);

#endif // STRINGS_CONN_SYNAPSE72_H_