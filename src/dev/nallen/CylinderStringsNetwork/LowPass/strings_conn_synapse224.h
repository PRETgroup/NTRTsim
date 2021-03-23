#ifndef STRINGS_CONN_SYNAPSE224_H_
#define STRINGS_CONN_SYNAPSE224_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse224 States
enum StringsConnSynapse224States {
    STRINGS_CONN_SYNAPSE224_L,
};

// strings_conn_synapse224 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse224States state;
} StringsConnSynapse224;

// strings_conn_synapse224 Initialisation function
void StringsConnSynapse224Init(StringsConnSynapse224* me);

// strings_conn_synapse224 Execution function
void StringsConnSynapse224Run(StringsConnSynapse224* me);

#endif // STRINGS_CONN_SYNAPSE224_H_