#ifndef STRINGS_CONN_SYNAPSE88_H_
#define STRINGS_CONN_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse88 States
enum StringsConnSynapse88States {
    STRINGS_CONN_SYNAPSE88_L,
};

// strings_conn_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse88States state;
} StringsConnSynapse88;

// strings_conn_synapse88 Initialisation function
void StringsConnSynapse88Init(StringsConnSynapse88* me);

// strings_conn_synapse88 Execution function
void StringsConnSynapse88Run(StringsConnSynapse88* me);

#endif // STRINGS_CONN_SYNAPSE88_H_