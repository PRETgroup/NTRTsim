#ifndef STRINGS_CONN_SYNAPSE331_H_
#define STRINGS_CONN_SYNAPSE331_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse331 States
enum StringsConnSynapse331States {
    STRINGS_CONN_SYNAPSE331_L,
};

// strings_conn_synapse331 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse331States state;
} StringsConnSynapse331;

// strings_conn_synapse331 Initialisation function
void StringsConnSynapse331Init(StringsConnSynapse331* me);

// strings_conn_synapse331 Execution function
void StringsConnSynapse331Run(StringsConnSynapse331* me);

#endif // STRINGS_CONN_SYNAPSE331_H_