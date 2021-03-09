#ifndef STRINGS_CONN_SYNAPSE103_H_
#define STRINGS_CONN_SYNAPSE103_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse103 States
enum StringsConnSynapse103States {
    STRINGS_CONN_SYNAPSE103_L,
};

// strings_conn_synapse103 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse103States state;
} StringsConnSynapse103;

// strings_conn_synapse103 Initialisation function
void StringsConnSynapse103Init(StringsConnSynapse103* me);

// strings_conn_synapse103 Execution function
void StringsConnSynapse103Run(StringsConnSynapse103* me);

#endif // STRINGS_CONN_SYNAPSE103_H_