#ifndef STRINGS_CONN_SYNAPSE208_H_
#define STRINGS_CONN_SYNAPSE208_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse208 States
enum StringsConnSynapse208States {
    STRINGS_CONN_SYNAPSE208_L,
};

// strings_conn_synapse208 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse208States state;
} StringsConnSynapse208;

// strings_conn_synapse208 Initialisation function
void StringsConnSynapse208Init(StringsConnSynapse208* me);

// strings_conn_synapse208 Execution function
void StringsConnSynapse208Run(StringsConnSynapse208* me);

#endif // STRINGS_CONN_SYNAPSE208_H_