#ifndef STRINGS_CONN_SYNAPSE70_H_
#define STRINGS_CONN_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse70 States
enum StringsConnSynapse70States {
    STRINGS_CONN_SYNAPSE70_L,
};

// strings_conn_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse70States state;
} StringsConnSynapse70;

// strings_conn_synapse70 Initialisation function
void StringsConnSynapse70Init(StringsConnSynapse70* me);

// strings_conn_synapse70 Execution function
void StringsConnSynapse70Run(StringsConnSynapse70* me);

#endif // STRINGS_CONN_SYNAPSE70_H_