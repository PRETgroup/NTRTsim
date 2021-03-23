#ifndef STRINGS_CONN_SYNAPSE241_H_
#define STRINGS_CONN_SYNAPSE241_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse241 States
enum StringsConnSynapse241States {
    STRINGS_CONN_SYNAPSE241_L,
};

// strings_conn_synapse241 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse241States state;
} StringsConnSynapse241;

// strings_conn_synapse241 Initialisation function
void StringsConnSynapse241Init(StringsConnSynapse241* me);

// strings_conn_synapse241 Execution function
void StringsConnSynapse241Run(StringsConnSynapse241* me);

#endif // STRINGS_CONN_SYNAPSE241_H_