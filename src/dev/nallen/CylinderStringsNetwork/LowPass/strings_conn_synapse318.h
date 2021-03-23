#ifndef STRINGS_CONN_SYNAPSE318_H_
#define STRINGS_CONN_SYNAPSE318_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse318 States
enum StringsConnSynapse318States {
    STRINGS_CONN_SYNAPSE318_L,
};

// strings_conn_synapse318 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse318States state;
} StringsConnSynapse318;

// strings_conn_synapse318 Initialisation function
void StringsConnSynapse318Init(StringsConnSynapse318* me);

// strings_conn_synapse318 Execution function
void StringsConnSynapse318Run(StringsConnSynapse318* me);

#endif // STRINGS_CONN_SYNAPSE318_H_