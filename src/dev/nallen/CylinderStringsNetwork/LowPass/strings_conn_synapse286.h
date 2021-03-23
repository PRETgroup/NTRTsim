#ifndef STRINGS_CONN_SYNAPSE286_H_
#define STRINGS_CONN_SYNAPSE286_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse286 States
enum StringsConnSynapse286States {
    STRINGS_CONN_SYNAPSE286_L,
};

// strings_conn_synapse286 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse286States state;
} StringsConnSynapse286;

// strings_conn_synapse286 Initialisation function
void StringsConnSynapse286Init(StringsConnSynapse286* me);

// strings_conn_synapse286 Execution function
void StringsConnSynapse286Run(StringsConnSynapse286* me);

#endif // STRINGS_CONN_SYNAPSE286_H_