#ifndef STRINGS_CONN_SYNAPSE116_H_
#define STRINGS_CONN_SYNAPSE116_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse116 States
enum StringsConnSynapse116States {
    STRINGS_CONN_SYNAPSE116_L,
};

// strings_conn_synapse116 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse116States state;
} StringsConnSynapse116;

// strings_conn_synapse116 Initialisation function
void StringsConnSynapse116Init(StringsConnSynapse116* me);

// strings_conn_synapse116 Execution function
void StringsConnSynapse116Run(StringsConnSynapse116* me);

#endif // STRINGS_CONN_SYNAPSE116_H_