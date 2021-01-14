#ifndef CONNECTION14_SYNAPSE75_H_
#define CONNECTION14_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse75 States
enum Connection14Synapse75States {
    CONNECTION14_SYNAPSE75_L,
};

// connection14_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse75States state;
} Connection14Synapse75;

// connection14_synapse75 Initialisation function
void Connection14Synapse75Init(Connection14Synapse75* me);

// connection14_synapse75 Execution function
void Connection14Synapse75Run(Connection14Synapse75* me);

#endif // CONNECTION14_SYNAPSE75_H_