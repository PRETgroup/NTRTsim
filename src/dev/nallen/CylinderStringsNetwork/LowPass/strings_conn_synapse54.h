#ifndef STRINGS_CONN_SYNAPSE54_H_
#define STRINGS_CONN_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse54 States
enum StringsConnSynapse54States {
    STRINGS_CONN_SYNAPSE54_L,
};

// strings_conn_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse54States state;
} StringsConnSynapse54;

// strings_conn_synapse54 Initialisation function
void StringsConnSynapse54Init(StringsConnSynapse54* me);

// strings_conn_synapse54 Execution function
void StringsConnSynapse54Run(StringsConnSynapse54* me);

#endif // STRINGS_CONN_SYNAPSE54_H_