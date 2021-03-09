#ifndef STRINGS_CONN_SYNAPSE191_H_
#define STRINGS_CONN_SYNAPSE191_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse191 States
enum StringsConnSynapse191States {
    STRINGS_CONN_SYNAPSE191_L,
};

// strings_conn_synapse191 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse191States state;
} StringsConnSynapse191;

// strings_conn_synapse191 Initialisation function
void StringsConnSynapse191Init(StringsConnSynapse191* me);

// strings_conn_synapse191 Execution function
void StringsConnSynapse191Run(StringsConnSynapse191* me);

#endif // STRINGS_CONN_SYNAPSE191_H_