#ifndef STRINGS_CONN_SYNAPSE341_H_
#define STRINGS_CONN_SYNAPSE341_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse341 States
enum StringsConnSynapse341States {
    STRINGS_CONN_SYNAPSE341_L,
};

// strings_conn_synapse341 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse341States state;
} StringsConnSynapse341;

// strings_conn_synapse341 Initialisation function
void StringsConnSynapse341Init(StringsConnSynapse341* me);

// strings_conn_synapse341 Execution function
void StringsConnSynapse341Run(StringsConnSynapse341* me);

#endif // STRINGS_CONN_SYNAPSE341_H_