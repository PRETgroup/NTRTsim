#ifndef STRINGS_CONN_SYNAPSE25_H_
#define STRINGS_CONN_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse25 States
enum StringsConnSynapse25States {
    STRINGS_CONN_SYNAPSE25_L,
};

// strings_conn_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse25States state;
} StringsConnSynapse25;

// strings_conn_synapse25 Initialisation function
void StringsConnSynapse25Init(StringsConnSynapse25* me);

// strings_conn_synapse25 Execution function
void StringsConnSynapse25Run(StringsConnSynapse25* me);

#endif // STRINGS_CONN_SYNAPSE25_H_