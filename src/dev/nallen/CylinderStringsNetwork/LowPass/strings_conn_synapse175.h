#ifndef STRINGS_CONN_SYNAPSE175_H_
#define STRINGS_CONN_SYNAPSE175_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse175 States
enum StringsConnSynapse175States {
    STRINGS_CONN_SYNAPSE175_L,
};

// strings_conn_synapse175 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse175States state;
} StringsConnSynapse175;

// strings_conn_synapse175 Initialisation function
void StringsConnSynapse175Init(StringsConnSynapse175* me);

// strings_conn_synapse175 Execution function
void StringsConnSynapse175Run(StringsConnSynapse175* me);

#endif // STRINGS_CONN_SYNAPSE175_H_