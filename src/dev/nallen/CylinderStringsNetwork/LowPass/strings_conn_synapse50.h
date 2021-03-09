#ifndef STRINGS_CONN_SYNAPSE50_H_
#define STRINGS_CONN_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse50 States
enum StringsConnSynapse50States {
    STRINGS_CONN_SYNAPSE50_L,
};

// strings_conn_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse50States state;
} StringsConnSynapse50;

// strings_conn_synapse50 Initialisation function
void StringsConnSynapse50Init(StringsConnSynapse50* me);

// strings_conn_synapse50 Execution function
void StringsConnSynapse50Run(StringsConnSynapse50* me);

#endif // STRINGS_CONN_SYNAPSE50_H_