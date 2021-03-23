#ifndef STRINGS_CONN_SYNAPSE282_H_
#define STRINGS_CONN_SYNAPSE282_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse282 States
enum StringsConnSynapse282States {
    STRINGS_CONN_SYNAPSE282_L,
};

// strings_conn_synapse282 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse282States state;
} StringsConnSynapse282;

// strings_conn_synapse282 Initialisation function
void StringsConnSynapse282Init(StringsConnSynapse282* me);

// strings_conn_synapse282 Execution function
void StringsConnSynapse282Run(StringsConnSynapse282* me);

#endif // STRINGS_CONN_SYNAPSE282_H_