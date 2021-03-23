#ifndef STRINGS_CONN_SYNAPSE294_H_
#define STRINGS_CONN_SYNAPSE294_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse294 States
enum StringsConnSynapse294States {
    STRINGS_CONN_SYNAPSE294_L,
};

// strings_conn_synapse294 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse294States state;
} StringsConnSynapse294;

// strings_conn_synapse294 Initialisation function
void StringsConnSynapse294Init(StringsConnSynapse294* me);

// strings_conn_synapse294 Execution function
void StringsConnSynapse294Run(StringsConnSynapse294* me);

#endif // STRINGS_CONN_SYNAPSE294_H_