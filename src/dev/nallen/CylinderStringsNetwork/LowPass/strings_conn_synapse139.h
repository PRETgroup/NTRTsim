#ifndef STRINGS_CONN_SYNAPSE139_H_
#define STRINGS_CONN_SYNAPSE139_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse139 States
enum StringsConnSynapse139States {
    STRINGS_CONN_SYNAPSE139_L,
};

// strings_conn_synapse139 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse139States state;
} StringsConnSynapse139;

// strings_conn_synapse139 Initialisation function
void StringsConnSynapse139Init(StringsConnSynapse139* me);

// strings_conn_synapse139 Execution function
void StringsConnSynapse139Run(StringsConnSynapse139* me);

#endif // STRINGS_CONN_SYNAPSE139_H_