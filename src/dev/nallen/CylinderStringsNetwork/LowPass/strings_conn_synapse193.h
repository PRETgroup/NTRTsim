#ifndef STRINGS_CONN_SYNAPSE193_H_
#define STRINGS_CONN_SYNAPSE193_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse193 States
enum StringsConnSynapse193States {
    STRINGS_CONN_SYNAPSE193_L,
};

// strings_conn_synapse193 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse193States state;
} StringsConnSynapse193;

// strings_conn_synapse193 Initialisation function
void StringsConnSynapse193Init(StringsConnSynapse193* me);

// strings_conn_synapse193 Execution function
void StringsConnSynapse193Run(StringsConnSynapse193* me);

#endif // STRINGS_CONN_SYNAPSE193_H_