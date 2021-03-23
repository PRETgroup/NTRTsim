#ifndef STRINGS_CONN_SYNAPSE238_H_
#define STRINGS_CONN_SYNAPSE238_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse238 States
enum StringsConnSynapse238States {
    STRINGS_CONN_SYNAPSE238_L,
};

// strings_conn_synapse238 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse238States state;
} StringsConnSynapse238;

// strings_conn_synapse238 Initialisation function
void StringsConnSynapse238Init(StringsConnSynapse238* me);

// strings_conn_synapse238 Execution function
void StringsConnSynapse238Run(StringsConnSynapse238* me);

#endif // STRINGS_CONN_SYNAPSE238_H_