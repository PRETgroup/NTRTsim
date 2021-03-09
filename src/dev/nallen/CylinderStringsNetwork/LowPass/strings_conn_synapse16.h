#ifndef STRINGS_CONN_SYNAPSE16_H_
#define STRINGS_CONN_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse16 States
enum StringsConnSynapse16States {
    STRINGS_CONN_SYNAPSE16_L,
};

// strings_conn_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse16States state;
} StringsConnSynapse16;

// strings_conn_synapse16 Initialisation function
void StringsConnSynapse16Init(StringsConnSynapse16* me);

// strings_conn_synapse16 Execution function
void StringsConnSynapse16Run(StringsConnSynapse16* me);

#endif // STRINGS_CONN_SYNAPSE16_H_