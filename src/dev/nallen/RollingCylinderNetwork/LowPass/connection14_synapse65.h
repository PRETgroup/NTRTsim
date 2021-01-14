#ifndef CONNECTION14_SYNAPSE65_H_
#define CONNECTION14_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse65 States
enum Connection14Synapse65States {
    CONNECTION14_SYNAPSE65_L,
};

// connection14_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse65States state;
} Connection14Synapse65;

// connection14_synapse65 Initialisation function
void Connection14Synapse65Init(Connection14Synapse65* me);

// connection14_synapse65 Execution function
void Connection14Synapse65Run(Connection14Synapse65* me);

#endif // CONNECTION14_SYNAPSE65_H_