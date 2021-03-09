#ifndef STRINGS_CONN_SYNAPSE99_H_
#define STRINGS_CONN_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse99 States
enum StringsConnSynapse99States {
    STRINGS_CONN_SYNAPSE99_L,
};

// strings_conn_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse99States state;
} StringsConnSynapse99;

// strings_conn_synapse99 Initialisation function
void StringsConnSynapse99Init(StringsConnSynapse99* me);

// strings_conn_synapse99 Execution function
void StringsConnSynapse99Run(StringsConnSynapse99* me);

#endif // STRINGS_CONN_SYNAPSE99_H_