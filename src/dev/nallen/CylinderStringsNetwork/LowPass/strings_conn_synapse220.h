#ifndef STRINGS_CONN_SYNAPSE220_H_
#define STRINGS_CONN_SYNAPSE220_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse220 States
enum StringsConnSynapse220States {
    STRINGS_CONN_SYNAPSE220_L,
};

// strings_conn_synapse220 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse220States state;
} StringsConnSynapse220;

// strings_conn_synapse220 Initialisation function
void StringsConnSynapse220Init(StringsConnSynapse220* me);

// strings_conn_synapse220 Execution function
void StringsConnSynapse220Run(StringsConnSynapse220* me);

#endif // STRINGS_CONN_SYNAPSE220_H_