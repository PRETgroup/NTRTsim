#ifndef STRINGS_CONN_SYNAPSE188_H_
#define STRINGS_CONN_SYNAPSE188_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse188 States
enum StringsConnSynapse188States {
    STRINGS_CONN_SYNAPSE188_L,
};

// strings_conn_synapse188 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse188States state;
} StringsConnSynapse188;

// strings_conn_synapse188 Initialisation function
void StringsConnSynapse188Init(StringsConnSynapse188* me);

// strings_conn_synapse188 Execution function
void StringsConnSynapse188Run(StringsConnSynapse188* me);

#endif // STRINGS_CONN_SYNAPSE188_H_