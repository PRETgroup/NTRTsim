#ifndef CONNECTION14_SYNAPSE45_H_
#define CONNECTION14_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse45 States
enum Connection14Synapse45States {
    CONNECTION14_SYNAPSE45_L,
};

// connection14_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse45States state;
} Connection14Synapse45;

// connection14_synapse45 Initialisation function
void Connection14Synapse45Init(Connection14Synapse45* me);

// connection14_synapse45 Execution function
void Connection14Synapse45Run(Connection14Synapse45* me);

#endif // CONNECTION14_SYNAPSE45_H_