#ifndef CONNECTION14_SYNAPSE27_H_
#define CONNECTION14_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse27 States
enum Connection14Synapse27States {
    CONNECTION14_SYNAPSE27_L,
};

// connection14_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse27States state;
} Connection14Synapse27;

// connection14_synapse27 Initialisation function
void Connection14Synapse27Init(Connection14Synapse27* me);

// connection14_synapse27 Execution function
void Connection14Synapse27Run(Connection14Synapse27* me);

#endif // CONNECTION14_SYNAPSE27_H_