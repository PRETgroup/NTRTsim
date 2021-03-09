#ifndef STRINGS_CONN_SYNAPSE119_H_
#define STRINGS_CONN_SYNAPSE119_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse119 States
enum StringsConnSynapse119States {
    STRINGS_CONN_SYNAPSE119_L,
};

// strings_conn_synapse119 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse119States state;
} StringsConnSynapse119;

// strings_conn_synapse119 Initialisation function
void StringsConnSynapse119Init(StringsConnSynapse119* me);

// strings_conn_synapse119 Execution function
void StringsConnSynapse119Run(StringsConnSynapse119* me);

#endif // STRINGS_CONN_SYNAPSE119_H_