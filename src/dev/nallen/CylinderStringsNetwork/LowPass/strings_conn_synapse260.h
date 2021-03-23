#ifndef STRINGS_CONN_SYNAPSE260_H_
#define STRINGS_CONN_SYNAPSE260_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse260 States
enum StringsConnSynapse260States {
    STRINGS_CONN_SYNAPSE260_L,
};

// strings_conn_synapse260 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse260States state;
} StringsConnSynapse260;

// strings_conn_synapse260 Initialisation function
void StringsConnSynapse260Init(StringsConnSynapse260* me);

// strings_conn_synapse260 Execution function
void StringsConnSynapse260Run(StringsConnSynapse260* me);

#endif // STRINGS_CONN_SYNAPSE260_H_