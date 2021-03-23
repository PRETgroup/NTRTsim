#ifndef STRINGS_CONN_SYNAPSE326_H_
#define STRINGS_CONN_SYNAPSE326_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse326 States
enum StringsConnSynapse326States {
    STRINGS_CONN_SYNAPSE326_L,
};

// strings_conn_synapse326 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse326States state;
} StringsConnSynapse326;

// strings_conn_synapse326 Initialisation function
void StringsConnSynapse326Init(StringsConnSynapse326* me);

// strings_conn_synapse326 Execution function
void StringsConnSynapse326Run(StringsConnSynapse326* me);

#endif // STRINGS_CONN_SYNAPSE326_H_