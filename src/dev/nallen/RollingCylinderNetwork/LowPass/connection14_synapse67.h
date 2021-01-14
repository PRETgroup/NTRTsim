#ifndef CONNECTION14_SYNAPSE67_H_
#define CONNECTION14_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse67 States
enum Connection14Synapse67States {
    CONNECTION14_SYNAPSE67_L,
};

// connection14_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse67States state;
} Connection14Synapse67;

// connection14_synapse67 Initialisation function
void Connection14Synapse67Init(Connection14Synapse67* me);

// connection14_synapse67 Execution function
void Connection14Synapse67Run(Connection14Synapse67* me);

#endif // CONNECTION14_SYNAPSE67_H_