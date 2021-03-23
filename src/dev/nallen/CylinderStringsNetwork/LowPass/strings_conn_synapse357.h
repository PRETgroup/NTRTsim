#ifndef STRINGS_CONN_SYNAPSE357_H_
#define STRINGS_CONN_SYNAPSE357_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse357 States
enum StringsConnSynapse357States {
    STRINGS_CONN_SYNAPSE357_L,
};

// strings_conn_synapse357 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse357States state;
} StringsConnSynapse357;

// strings_conn_synapse357 Initialisation function
void StringsConnSynapse357Init(StringsConnSynapse357* me);

// strings_conn_synapse357 Execution function
void StringsConnSynapse357Run(StringsConnSynapse357* me);

#endif // STRINGS_CONN_SYNAPSE357_H_