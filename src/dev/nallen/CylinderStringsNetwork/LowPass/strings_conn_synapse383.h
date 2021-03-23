#ifndef STRINGS_CONN_SYNAPSE383_H_
#define STRINGS_CONN_SYNAPSE383_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse383 States
enum StringsConnSynapse383States {
    STRINGS_CONN_SYNAPSE383_L,
};

// strings_conn_synapse383 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse383States state;
} StringsConnSynapse383;

// strings_conn_synapse383 Initialisation function
void StringsConnSynapse383Init(StringsConnSynapse383* me);

// strings_conn_synapse383 Execution function
void StringsConnSynapse383Run(StringsConnSynapse383* me);

#endif // STRINGS_CONN_SYNAPSE383_H_