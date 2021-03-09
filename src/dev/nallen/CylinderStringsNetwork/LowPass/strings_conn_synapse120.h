#ifndef STRINGS_CONN_SYNAPSE120_H_
#define STRINGS_CONN_SYNAPSE120_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse120 States
enum StringsConnSynapse120States {
    STRINGS_CONN_SYNAPSE120_L,
};

// strings_conn_synapse120 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse120States state;
} StringsConnSynapse120;

// strings_conn_synapse120 Initialisation function
void StringsConnSynapse120Init(StringsConnSynapse120* me);

// strings_conn_synapse120 Execution function
void StringsConnSynapse120Run(StringsConnSynapse120* me);

#endif // STRINGS_CONN_SYNAPSE120_H_