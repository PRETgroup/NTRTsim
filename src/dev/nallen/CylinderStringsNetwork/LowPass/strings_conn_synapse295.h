#ifndef STRINGS_CONN_SYNAPSE295_H_
#define STRINGS_CONN_SYNAPSE295_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse295 States
enum StringsConnSynapse295States {
    STRINGS_CONN_SYNAPSE295_L,
};

// strings_conn_synapse295 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse295States state;
} StringsConnSynapse295;

// strings_conn_synapse295 Initialisation function
void StringsConnSynapse295Init(StringsConnSynapse295* me);

// strings_conn_synapse295 Execution function
void StringsConnSynapse295Run(StringsConnSynapse295* me);

#endif // STRINGS_CONN_SYNAPSE295_H_