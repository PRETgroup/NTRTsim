#ifndef STRINGS_CONN_SYNAPSE117_H_
#define STRINGS_CONN_SYNAPSE117_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse117 States
enum StringsConnSynapse117States {
    STRINGS_CONN_SYNAPSE117_L,
};

// strings_conn_synapse117 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse117States state;
} StringsConnSynapse117;

// strings_conn_synapse117 Initialisation function
void StringsConnSynapse117Init(StringsConnSynapse117* me);

// strings_conn_synapse117 Execution function
void StringsConnSynapse117Run(StringsConnSynapse117* me);

#endif // STRINGS_CONN_SYNAPSE117_H_