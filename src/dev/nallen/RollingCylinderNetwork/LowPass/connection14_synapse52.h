#ifndef CONNECTION14_SYNAPSE52_H_
#define CONNECTION14_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse52 States
enum Connection14Synapse52States {
    CONNECTION14_SYNAPSE52_L,
};

// connection14_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse52States state;
} Connection14Synapse52;

// connection14_synapse52 Initialisation function
void Connection14Synapse52Init(Connection14Synapse52* me);

// connection14_synapse52 Execution function
void Connection14Synapse52Run(Connection14Synapse52* me);

#endif // CONNECTION14_SYNAPSE52_H_