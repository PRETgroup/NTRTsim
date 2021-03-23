#ifndef STRINGS_CONN_SYNAPSE330_H_
#define STRINGS_CONN_SYNAPSE330_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse330 States
enum StringsConnSynapse330States {
    STRINGS_CONN_SYNAPSE330_L,
};

// strings_conn_synapse330 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse330States state;
} StringsConnSynapse330;

// strings_conn_synapse330 Initialisation function
void StringsConnSynapse330Init(StringsConnSynapse330* me);

// strings_conn_synapse330 Execution function
void StringsConnSynapse330Run(StringsConnSynapse330* me);

#endif // STRINGS_CONN_SYNAPSE330_H_