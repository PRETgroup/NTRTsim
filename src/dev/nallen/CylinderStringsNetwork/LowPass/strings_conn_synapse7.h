#ifndef STRINGS_CONN_SYNAPSE7_H_
#define STRINGS_CONN_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse7 States
enum StringsConnSynapse7States {
    STRINGS_CONN_SYNAPSE7_L,
};

// strings_conn_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse7States state;
} StringsConnSynapse7;

// strings_conn_synapse7 Initialisation function
void StringsConnSynapse7Init(StringsConnSynapse7* me);

// strings_conn_synapse7 Execution function
void StringsConnSynapse7Run(StringsConnSynapse7* me);

#endif // STRINGS_CONN_SYNAPSE7_H_