#ifndef STRINGS_CONN_SYNAPSE345_H_
#define STRINGS_CONN_SYNAPSE345_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse345 States
enum StringsConnSynapse345States {
    STRINGS_CONN_SYNAPSE345_L,
};

// strings_conn_synapse345 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse345States state;
} StringsConnSynapse345;

// strings_conn_synapse345 Initialisation function
void StringsConnSynapse345Init(StringsConnSynapse345* me);

// strings_conn_synapse345 Execution function
void StringsConnSynapse345Run(StringsConnSynapse345* me);

#endif // STRINGS_CONN_SYNAPSE345_H_