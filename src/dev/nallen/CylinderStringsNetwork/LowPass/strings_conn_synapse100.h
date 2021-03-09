#ifndef STRINGS_CONN_SYNAPSE100_H_
#define STRINGS_CONN_SYNAPSE100_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse100 States
enum StringsConnSynapse100States {
    STRINGS_CONN_SYNAPSE100_L,
};

// strings_conn_synapse100 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse100States state;
} StringsConnSynapse100;

// strings_conn_synapse100 Initialisation function
void StringsConnSynapse100Init(StringsConnSynapse100* me);

// strings_conn_synapse100 Execution function
void StringsConnSynapse100Run(StringsConnSynapse100* me);

#endif // STRINGS_CONN_SYNAPSE100_H_