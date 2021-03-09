#ifndef STRINGS_CONN_SYNAPSE172_H_
#define STRINGS_CONN_SYNAPSE172_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse172 States
enum StringsConnSynapse172States {
    STRINGS_CONN_SYNAPSE172_L,
};

// strings_conn_synapse172 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse172States state;
} StringsConnSynapse172;

// strings_conn_synapse172 Initialisation function
void StringsConnSynapse172Init(StringsConnSynapse172* me);

// strings_conn_synapse172 Execution function
void StringsConnSynapse172Run(StringsConnSynapse172* me);

#endif // STRINGS_CONN_SYNAPSE172_H_