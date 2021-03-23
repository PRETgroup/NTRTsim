#ifndef STRINGS_CONN_SYNAPSE313_H_
#define STRINGS_CONN_SYNAPSE313_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse313 States
enum StringsConnSynapse313States {
    STRINGS_CONN_SYNAPSE313_L,
};

// strings_conn_synapse313 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse313States state;
} StringsConnSynapse313;

// strings_conn_synapse313 Initialisation function
void StringsConnSynapse313Init(StringsConnSynapse313* me);

// strings_conn_synapse313 Execution function
void StringsConnSynapse313Run(StringsConnSynapse313* me);

#endif // STRINGS_CONN_SYNAPSE313_H_