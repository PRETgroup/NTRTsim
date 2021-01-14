#ifndef CONNECTION14_SYNAPSE58_H_
#define CONNECTION14_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse58 States
enum Connection14Synapse58States {
    CONNECTION14_SYNAPSE58_L,
};

// connection14_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse58States state;
} Connection14Synapse58;

// connection14_synapse58 Initialisation function
void Connection14Synapse58Init(Connection14Synapse58* me);

// connection14_synapse58 Execution function
void Connection14Synapse58Run(Connection14Synapse58* me);

#endif // CONNECTION14_SYNAPSE58_H_