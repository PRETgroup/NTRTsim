#ifndef STRINGS_CONN_SYNAPSE111_H_
#define STRINGS_CONN_SYNAPSE111_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse111 States
enum StringsConnSynapse111States {
    STRINGS_CONN_SYNAPSE111_L,
};

// strings_conn_synapse111 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse111States state;
} StringsConnSynapse111;

// strings_conn_synapse111 Initialisation function
void StringsConnSynapse111Init(StringsConnSynapse111* me);

// strings_conn_synapse111 Execution function
void StringsConnSynapse111Run(StringsConnSynapse111* me);

#endif // STRINGS_CONN_SYNAPSE111_H_