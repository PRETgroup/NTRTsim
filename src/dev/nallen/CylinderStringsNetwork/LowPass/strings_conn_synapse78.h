#ifndef STRINGS_CONN_SYNAPSE78_H_
#define STRINGS_CONN_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse78 States
enum StringsConnSynapse78States {
    STRINGS_CONN_SYNAPSE78_L,
};

// strings_conn_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse78States state;
} StringsConnSynapse78;

// strings_conn_synapse78 Initialisation function
void StringsConnSynapse78Init(StringsConnSynapse78* me);

// strings_conn_synapse78 Execution function
void StringsConnSynapse78Run(StringsConnSynapse78* me);

#endif // STRINGS_CONN_SYNAPSE78_H_