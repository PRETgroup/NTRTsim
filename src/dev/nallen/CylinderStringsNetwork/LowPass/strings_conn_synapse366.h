#ifndef STRINGS_CONN_SYNAPSE366_H_
#define STRINGS_CONN_SYNAPSE366_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse366 States
enum StringsConnSynapse366States {
    STRINGS_CONN_SYNAPSE366_L,
};

// strings_conn_synapse366 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse366States state;
} StringsConnSynapse366;

// strings_conn_synapse366 Initialisation function
void StringsConnSynapse366Init(StringsConnSynapse366* me);

// strings_conn_synapse366 Execution function
void StringsConnSynapse366Run(StringsConnSynapse366* me);

#endif // STRINGS_CONN_SYNAPSE366_H_