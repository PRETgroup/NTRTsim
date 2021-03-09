#ifndef STRINGS_CONN_SYNAPSE51_H_
#define STRINGS_CONN_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse51 States
enum StringsConnSynapse51States {
    STRINGS_CONN_SYNAPSE51_L,
};

// strings_conn_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse51States state;
} StringsConnSynapse51;

// strings_conn_synapse51 Initialisation function
void StringsConnSynapse51Init(StringsConnSynapse51* me);

// strings_conn_synapse51 Execution function
void StringsConnSynapse51Run(StringsConnSynapse51* me);

#endif // STRINGS_CONN_SYNAPSE51_H_