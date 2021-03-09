#ifndef STRINGS_CONN_SYNAPSE56_H_
#define STRINGS_CONN_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_conn_synapse56 States
enum StringsConnSynapse56States {
    STRINGS_CONN_SYNAPSE56_L,
};

// strings_conn_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse56States state;
} StringsConnSynapse56;

// strings_conn_synapse56 Initialisation function
void StringsConnSynapse56Init(StringsConnSynapse56* me);

// strings_conn_synapse56 Execution function
void StringsConnSynapse56Run(StringsConnSynapse56* me);

#endif // STRINGS_CONN_SYNAPSE56_H_