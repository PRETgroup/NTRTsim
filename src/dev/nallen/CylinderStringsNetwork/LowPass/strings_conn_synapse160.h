#ifndef STRINGS_CONN_SYNAPSE160_H_
#define STRINGS_CONN_SYNAPSE160_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse160 States
enum StringsConnSynapse160States {
    STRINGS_CONN_SYNAPSE160_L,
};

// strings_conn_synapse160 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse160States state;
} StringsConnSynapse160;

// strings_conn_synapse160 Initialisation function
void StringsConnSynapse160Init(StringsConnSynapse160* me);

// strings_conn_synapse160 Execution function
void StringsConnSynapse160Run(StringsConnSynapse160* me);

#endif // STRINGS_CONN_SYNAPSE160_H_