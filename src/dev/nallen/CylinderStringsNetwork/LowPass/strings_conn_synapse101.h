#ifndef STRINGS_CONN_SYNAPSE101_H_
#define STRINGS_CONN_SYNAPSE101_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse101 States
enum StringsConnSynapse101States {
    STRINGS_CONN_SYNAPSE101_L,
};

// strings_conn_synapse101 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse101States state;
} StringsConnSynapse101;

// strings_conn_synapse101 Initialisation function
void StringsConnSynapse101Init(StringsConnSynapse101* me);

// strings_conn_synapse101 Execution function
void StringsConnSynapse101Run(StringsConnSynapse101* me);

#endif // STRINGS_CONN_SYNAPSE101_H_