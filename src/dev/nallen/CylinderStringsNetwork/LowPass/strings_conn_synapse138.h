#ifndef STRINGS_CONN_SYNAPSE138_H_
#define STRINGS_CONN_SYNAPSE138_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse138 States
enum StringsConnSynapse138States {
    STRINGS_CONN_SYNAPSE138_L,
};

// strings_conn_synapse138 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse138States state;
} StringsConnSynapse138;

// strings_conn_synapse138 Initialisation function
void StringsConnSynapse138Init(StringsConnSynapse138* me);

// strings_conn_synapse138 Execution function
void StringsConnSynapse138Run(StringsConnSynapse138* me);

#endif // STRINGS_CONN_SYNAPSE138_H_