#ifndef STRINGS_CONN_SYNAPSE251_H_
#define STRINGS_CONN_SYNAPSE251_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse251 States
enum StringsConnSynapse251States {
    STRINGS_CONN_SYNAPSE251_L,
};

// strings_conn_synapse251 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse251States state;
} StringsConnSynapse251;

// strings_conn_synapse251 Initialisation function
void StringsConnSynapse251Init(StringsConnSynapse251* me);

// strings_conn_synapse251 Execution function
void StringsConnSynapse251Run(StringsConnSynapse251* me);

#endif // STRINGS_CONN_SYNAPSE251_H_