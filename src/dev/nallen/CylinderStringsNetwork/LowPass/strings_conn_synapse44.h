#ifndef STRINGS_CONN_SYNAPSE44_H_
#define STRINGS_CONN_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse44 States
enum StringsConnSynapse44States {
    STRINGS_CONN_SYNAPSE44_L,
};

// strings_conn_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse44States state;
} StringsConnSynapse44;

// strings_conn_synapse44 Initialisation function
void StringsConnSynapse44Init(StringsConnSynapse44* me);

// strings_conn_synapse44 Execution function
void StringsConnSynapse44Run(StringsConnSynapse44* me);

#endif // STRINGS_CONN_SYNAPSE44_H_