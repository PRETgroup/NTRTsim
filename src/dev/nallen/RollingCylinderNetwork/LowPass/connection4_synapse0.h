#ifndef CONNECTION4_SYNAPSE0_H_
#define CONNECTION4_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection4_synapse0 States
enum Connection4Synapse0States {
    CONNECTION4_SYNAPSE0_L,
};

// connection4_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection4Synapse0States state;
} Connection4Synapse0;

// connection4_synapse0 Initialisation function
void Connection4Synapse0Init(Connection4Synapse0* me);

// connection4_synapse0 Execution function
void Connection4Synapse0Run(Connection4Synapse0* me);

#endif // CONNECTION4_SYNAPSE0_H_