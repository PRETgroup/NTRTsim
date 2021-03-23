#ifndef STRINGS_CONN_SYNAPSE272_H_
#define STRINGS_CONN_SYNAPSE272_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse272 States
enum StringsConnSynapse272States {
    STRINGS_CONN_SYNAPSE272_L,
};

// strings_conn_synapse272 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse272States state;
} StringsConnSynapse272;

// strings_conn_synapse272 Initialisation function
void StringsConnSynapse272Init(StringsConnSynapse272* me);

// strings_conn_synapse272 Execution function
void StringsConnSynapse272Run(StringsConnSynapse272* me);

#endif // STRINGS_CONN_SYNAPSE272_H_