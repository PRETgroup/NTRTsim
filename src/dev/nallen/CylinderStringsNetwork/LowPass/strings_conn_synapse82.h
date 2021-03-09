#ifndef STRINGS_CONN_SYNAPSE82_H_
#define STRINGS_CONN_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse82 States
enum StringsConnSynapse82States {
    STRINGS_CONN_SYNAPSE82_L,
};

// strings_conn_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse82States state;
} StringsConnSynapse82;

// strings_conn_synapse82 Initialisation function
void StringsConnSynapse82Init(StringsConnSynapse82* me);

// strings_conn_synapse82 Execution function
void StringsConnSynapse82Run(StringsConnSynapse82* me);

#endif // STRINGS_CONN_SYNAPSE82_H_