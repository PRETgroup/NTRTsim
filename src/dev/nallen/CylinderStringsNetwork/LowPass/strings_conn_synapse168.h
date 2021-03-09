#ifndef STRINGS_CONN_SYNAPSE168_H_
#define STRINGS_CONN_SYNAPSE168_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse168 States
enum StringsConnSynapse168States {
    STRINGS_CONN_SYNAPSE168_L,
};

// strings_conn_synapse168 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse168States state;
} StringsConnSynapse168;

// strings_conn_synapse168 Initialisation function
void StringsConnSynapse168Init(StringsConnSynapse168* me);

// strings_conn_synapse168 Execution function
void StringsConnSynapse168Run(StringsConnSynapse168* me);

#endif // STRINGS_CONN_SYNAPSE168_H_