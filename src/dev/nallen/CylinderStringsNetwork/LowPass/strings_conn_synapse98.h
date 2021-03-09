#ifndef STRINGS_CONN_SYNAPSE98_H_
#define STRINGS_CONN_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse98 States
enum StringsConnSynapse98States {
    STRINGS_CONN_SYNAPSE98_L,
};

// strings_conn_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse98States state;
} StringsConnSynapse98;

// strings_conn_synapse98 Initialisation function
void StringsConnSynapse98Init(StringsConnSynapse98* me);

// strings_conn_synapse98 Execution function
void StringsConnSynapse98Run(StringsConnSynapse98* me);

#endif // STRINGS_CONN_SYNAPSE98_H_