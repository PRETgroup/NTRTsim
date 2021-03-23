#ifndef STRINGS_CONN_SYNAPSE321_H_
#define STRINGS_CONN_SYNAPSE321_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse321 States
enum StringsConnSynapse321States {
    STRINGS_CONN_SYNAPSE321_L,
};

// strings_conn_synapse321 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse321States state;
} StringsConnSynapse321;

// strings_conn_synapse321 Initialisation function
void StringsConnSynapse321Init(StringsConnSynapse321* me);

// strings_conn_synapse321 Execution function
void StringsConnSynapse321Run(StringsConnSynapse321* me);

#endif // STRINGS_CONN_SYNAPSE321_H_