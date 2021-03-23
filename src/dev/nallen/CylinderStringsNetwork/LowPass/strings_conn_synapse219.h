#ifndef STRINGS_CONN_SYNAPSE219_H_
#define STRINGS_CONN_SYNAPSE219_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse219 States
enum StringsConnSynapse219States {
    STRINGS_CONN_SYNAPSE219_L,
};

// strings_conn_synapse219 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse219States state;
} StringsConnSynapse219;

// strings_conn_synapse219 Initialisation function
void StringsConnSynapse219Init(StringsConnSynapse219* me);

// strings_conn_synapse219 Execution function
void StringsConnSynapse219Run(StringsConnSynapse219* me);

#endif // STRINGS_CONN_SYNAPSE219_H_