#ifndef STRINGS_CONN_SYNAPSE297_H_
#define STRINGS_CONN_SYNAPSE297_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse297 States
enum StringsConnSynapse297States {
    STRINGS_CONN_SYNAPSE297_L,
};

// strings_conn_synapse297 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse297States state;
} StringsConnSynapse297;

// strings_conn_synapse297 Initialisation function
void StringsConnSynapse297Init(StringsConnSynapse297* me);

// strings_conn_synapse297 Execution function
void StringsConnSynapse297Run(StringsConnSynapse297* me);

#endif // STRINGS_CONN_SYNAPSE297_H_