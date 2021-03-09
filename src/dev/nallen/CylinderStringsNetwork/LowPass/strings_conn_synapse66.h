#ifndef STRINGS_CONN_SYNAPSE66_H_
#define STRINGS_CONN_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse66 States
enum StringsConnSynapse66States {
    STRINGS_CONN_SYNAPSE66_L,
};

// strings_conn_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse66States state;
} StringsConnSynapse66;

// strings_conn_synapse66 Initialisation function
void StringsConnSynapse66Init(StringsConnSynapse66* me);

// strings_conn_synapse66 Execution function
void StringsConnSynapse66Run(StringsConnSynapse66* me);

#endif // STRINGS_CONN_SYNAPSE66_H_