#ifndef STRINGS_CONN_SYNAPSE122_H_
#define STRINGS_CONN_SYNAPSE122_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse122 States
enum StringsConnSynapse122States {
    STRINGS_CONN_SYNAPSE122_L,
};

// strings_conn_synapse122 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse122States state;
} StringsConnSynapse122;

// strings_conn_synapse122 Initialisation function
void StringsConnSynapse122Init(StringsConnSynapse122* me);

// strings_conn_synapse122 Execution function
void StringsConnSynapse122Run(StringsConnSynapse122* me);

#endif // STRINGS_CONN_SYNAPSE122_H_