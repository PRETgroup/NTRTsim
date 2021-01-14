#ifndef CONNECTION5_SYNAPSE0_H_
#define CONNECTION5_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection5_synapse0 States
enum Connection5Synapse0States {
    CONNECTION5_SYNAPSE0_L,
};

// connection5_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection5Synapse0States state;
} Connection5Synapse0;

// connection5_synapse0 Initialisation function
void Connection5Synapse0Init(Connection5Synapse0* me);

// connection5_synapse0 Execution function
void Connection5Synapse0Run(Connection5Synapse0* me);

#endif // CONNECTION5_SYNAPSE0_H_