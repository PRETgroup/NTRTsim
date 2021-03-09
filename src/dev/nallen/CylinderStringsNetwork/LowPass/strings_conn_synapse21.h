#ifndef STRINGS_CONN_SYNAPSE21_H_
#define STRINGS_CONN_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse21 States
enum StringsConnSynapse21States {
    STRINGS_CONN_SYNAPSE21_L,
};

// strings_conn_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse21States state;
} StringsConnSynapse21;

// strings_conn_synapse21 Initialisation function
void StringsConnSynapse21Init(StringsConnSynapse21* me);

// strings_conn_synapse21 Execution function
void StringsConnSynapse21Run(StringsConnSynapse21* me);

#endif // STRINGS_CONN_SYNAPSE21_H_