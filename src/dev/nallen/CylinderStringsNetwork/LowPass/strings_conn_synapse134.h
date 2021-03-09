#ifndef STRINGS_CONN_SYNAPSE134_H_
#define STRINGS_CONN_SYNAPSE134_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse134 States
enum StringsConnSynapse134States {
    STRINGS_CONN_SYNAPSE134_L,
};

// strings_conn_synapse134 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse134States state;
} StringsConnSynapse134;

// strings_conn_synapse134 Initialisation function
void StringsConnSynapse134Init(StringsConnSynapse134* me);

// strings_conn_synapse134 Execution function
void StringsConnSynapse134Run(StringsConnSynapse134* me);

#endif // STRINGS_CONN_SYNAPSE134_H_