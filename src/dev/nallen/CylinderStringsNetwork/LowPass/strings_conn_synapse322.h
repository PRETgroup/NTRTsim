#ifndef STRINGS_CONN_SYNAPSE322_H_
#define STRINGS_CONN_SYNAPSE322_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse322 States
enum StringsConnSynapse322States {
    STRINGS_CONN_SYNAPSE322_L,
};

// strings_conn_synapse322 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse322States state;
} StringsConnSynapse322;

// strings_conn_synapse322 Initialisation function
void StringsConnSynapse322Init(StringsConnSynapse322* me);

// strings_conn_synapse322 Execution function
void StringsConnSynapse322Run(StringsConnSynapse322* me);

#endif // STRINGS_CONN_SYNAPSE322_H_