#ifndef STRINGS_CONN_SYNAPSE197_H_
#define STRINGS_CONN_SYNAPSE197_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse197 States
enum StringsConnSynapse197States {
    STRINGS_CONN_SYNAPSE197_L,
};

// strings_conn_synapse197 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse197States state;
} StringsConnSynapse197;

// strings_conn_synapse197 Initialisation function
void StringsConnSynapse197Init(StringsConnSynapse197* me);

// strings_conn_synapse197 Execution function
void StringsConnSynapse197Run(StringsConnSynapse197* me);

#endif // STRINGS_CONN_SYNAPSE197_H_