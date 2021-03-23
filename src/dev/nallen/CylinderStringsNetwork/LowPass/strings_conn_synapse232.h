#ifndef STRINGS_CONN_SYNAPSE232_H_
#define STRINGS_CONN_SYNAPSE232_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse232 States
enum StringsConnSynapse232States {
    STRINGS_CONN_SYNAPSE232_L,
};

// strings_conn_synapse232 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse232States state;
} StringsConnSynapse232;

// strings_conn_synapse232 Initialisation function
void StringsConnSynapse232Init(StringsConnSynapse232* me);

// strings_conn_synapse232 Execution function
void StringsConnSynapse232Run(StringsConnSynapse232* me);

#endif // STRINGS_CONN_SYNAPSE232_H_