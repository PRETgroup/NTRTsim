#ifndef STRINGS_CONN_SYNAPSE69_H_
#define STRINGS_CONN_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse69 States
enum StringsConnSynapse69States {
    STRINGS_CONN_SYNAPSE69_L,
};

// strings_conn_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse69States state;
} StringsConnSynapse69;

// strings_conn_synapse69 Initialisation function
void StringsConnSynapse69Init(StringsConnSynapse69* me);

// strings_conn_synapse69 Execution function
void StringsConnSynapse69Run(StringsConnSynapse69* me);

#endif // STRINGS_CONN_SYNAPSE69_H_