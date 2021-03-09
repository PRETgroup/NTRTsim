#ifndef STRINGS_CONN_SYNAPSE123_H_
#define STRINGS_CONN_SYNAPSE123_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse123 States
enum StringsConnSynapse123States {
    STRINGS_CONN_SYNAPSE123_L,
};

// strings_conn_synapse123 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse123States state;
} StringsConnSynapse123;

// strings_conn_synapse123 Initialisation function
void StringsConnSynapse123Init(StringsConnSynapse123* me);

// strings_conn_synapse123 Execution function
void StringsConnSynapse123Run(StringsConnSynapse123* me);

#endif // STRINGS_CONN_SYNAPSE123_H_