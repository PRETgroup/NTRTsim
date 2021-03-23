#ifndef STRINGS_CONN_SYNAPSE273_H_
#define STRINGS_CONN_SYNAPSE273_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse273 States
enum StringsConnSynapse273States {
    STRINGS_CONN_SYNAPSE273_L,
};

// strings_conn_synapse273 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse273States state;
} StringsConnSynapse273;

// strings_conn_synapse273 Initialisation function
void StringsConnSynapse273Init(StringsConnSynapse273* me);

// strings_conn_synapse273 Execution function
void StringsConnSynapse273Run(StringsConnSynapse273* me);

#endif // STRINGS_CONN_SYNAPSE273_H_