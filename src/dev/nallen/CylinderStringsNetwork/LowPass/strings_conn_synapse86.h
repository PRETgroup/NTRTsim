#ifndef STRINGS_CONN_SYNAPSE86_H_
#define STRINGS_CONN_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse86 States
enum StringsConnSynapse86States {
    STRINGS_CONN_SYNAPSE86_L,
};

// strings_conn_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse86States state;
} StringsConnSynapse86;

// strings_conn_synapse86 Initialisation function
void StringsConnSynapse86Init(StringsConnSynapse86* me);

// strings_conn_synapse86 Execution function
void StringsConnSynapse86Run(StringsConnSynapse86* me);

#endif // STRINGS_CONN_SYNAPSE86_H_