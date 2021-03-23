#ifndef STRINGS_CONN_SYNAPSE280_H_
#define STRINGS_CONN_SYNAPSE280_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse280 States
enum StringsConnSynapse280States {
    STRINGS_CONN_SYNAPSE280_L,
};

// strings_conn_synapse280 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse280States state;
} StringsConnSynapse280;

// strings_conn_synapse280 Initialisation function
void StringsConnSynapse280Init(StringsConnSynapse280* me);

// strings_conn_synapse280 Execution function
void StringsConnSynapse280Run(StringsConnSynapse280* me);

#endif // STRINGS_CONN_SYNAPSE280_H_