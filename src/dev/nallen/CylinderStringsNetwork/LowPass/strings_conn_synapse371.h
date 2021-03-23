#ifndef STRINGS_CONN_SYNAPSE371_H_
#define STRINGS_CONN_SYNAPSE371_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse371 States
enum StringsConnSynapse371States {
    STRINGS_CONN_SYNAPSE371_L,
};

// strings_conn_synapse371 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse371States state;
} StringsConnSynapse371;

// strings_conn_synapse371 Initialisation function
void StringsConnSynapse371Init(StringsConnSynapse371* me);

// strings_conn_synapse371 Execution function
void StringsConnSynapse371Run(StringsConnSynapse371* me);

#endif // STRINGS_CONN_SYNAPSE371_H_