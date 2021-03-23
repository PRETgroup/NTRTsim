#ifndef STRINGS_CONN_SYNAPSE370_H_
#define STRINGS_CONN_SYNAPSE370_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse370 States
enum StringsConnSynapse370States {
    STRINGS_CONN_SYNAPSE370_L,
};

// strings_conn_synapse370 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse370States state;
} StringsConnSynapse370;

// strings_conn_synapse370 Initialisation function
void StringsConnSynapse370Init(StringsConnSynapse370* me);

// strings_conn_synapse370 Execution function
void StringsConnSynapse370Run(StringsConnSynapse370* me);

#endif // STRINGS_CONN_SYNAPSE370_H_