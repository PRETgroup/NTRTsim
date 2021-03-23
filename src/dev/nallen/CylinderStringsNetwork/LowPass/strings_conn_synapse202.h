#ifndef STRINGS_CONN_SYNAPSE202_H_
#define STRINGS_CONN_SYNAPSE202_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse202 States
enum StringsConnSynapse202States {
    STRINGS_CONN_SYNAPSE202_L,
};

// strings_conn_synapse202 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse202States state;
} StringsConnSynapse202;

// strings_conn_synapse202 Initialisation function
void StringsConnSynapse202Init(StringsConnSynapse202* me);

// strings_conn_synapse202 Execution function
void StringsConnSynapse202Run(StringsConnSynapse202* me);

#endif // STRINGS_CONN_SYNAPSE202_H_