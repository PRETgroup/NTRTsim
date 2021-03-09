#ifndef STRINGS_CONN_SYNAPSE109_H_
#define STRINGS_CONN_SYNAPSE109_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse109 States
enum StringsConnSynapse109States {
    STRINGS_CONN_SYNAPSE109_L,
};

// strings_conn_synapse109 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse109States state;
} StringsConnSynapse109;

// strings_conn_synapse109 Initialisation function
void StringsConnSynapse109Init(StringsConnSynapse109* me);

// strings_conn_synapse109 Execution function
void StringsConnSynapse109Run(StringsConnSynapse109* me);

#endif // STRINGS_CONN_SYNAPSE109_H_