#ifndef STRINGS_CONN_SYNAPSE107_H_
#define STRINGS_CONN_SYNAPSE107_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse107 States
enum StringsConnSynapse107States {
    STRINGS_CONN_SYNAPSE107_L,
};

// strings_conn_synapse107 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse107States state;
} StringsConnSynapse107;

// strings_conn_synapse107 Initialisation function
void StringsConnSynapse107Init(StringsConnSynapse107* me);

// strings_conn_synapse107 Execution function
void StringsConnSynapse107Run(StringsConnSynapse107* me);

#endif // STRINGS_CONN_SYNAPSE107_H_