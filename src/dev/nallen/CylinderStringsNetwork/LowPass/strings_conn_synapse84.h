#ifndef STRINGS_CONN_SYNAPSE84_H_
#define STRINGS_CONN_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse84 States
enum StringsConnSynapse84States {
    STRINGS_CONN_SYNAPSE84_L,
};

// strings_conn_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse84States state;
} StringsConnSynapse84;

// strings_conn_synapse84 Initialisation function
void StringsConnSynapse84Init(StringsConnSynapse84* me);

// strings_conn_synapse84 Execution function
void StringsConnSynapse84Run(StringsConnSynapse84* me);

#endif // STRINGS_CONN_SYNAPSE84_H_