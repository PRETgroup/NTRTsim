#ifndef STRINGS_CONN_SYNAPSE373_H_
#define STRINGS_CONN_SYNAPSE373_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse373 States
enum StringsConnSynapse373States {
    STRINGS_CONN_SYNAPSE373_L,
};

// strings_conn_synapse373 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse373States state;
} StringsConnSynapse373;

// strings_conn_synapse373 Initialisation function
void StringsConnSynapse373Init(StringsConnSynapse373* me);

// strings_conn_synapse373 Execution function
void StringsConnSynapse373Run(StringsConnSynapse373* me);

#endif // STRINGS_CONN_SYNAPSE373_H_