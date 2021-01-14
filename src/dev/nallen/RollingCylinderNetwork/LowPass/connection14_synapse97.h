#ifndef CONNECTION14_SYNAPSE97_H_
#define CONNECTION14_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse97 States
enum Connection14Synapse97States {
    CONNECTION14_SYNAPSE97_L,
};

// connection14_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse97States state;
} Connection14Synapse97;

// connection14_synapse97 Initialisation function
void Connection14Synapse97Init(Connection14Synapse97* me);

// connection14_synapse97 Execution function
void Connection14Synapse97Run(Connection14Synapse97* me);

#endif // CONNECTION14_SYNAPSE97_H_