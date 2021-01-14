#ifndef CONNECTION14_SYNAPSE8_H_
#define CONNECTION14_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse8 States
enum Connection14Synapse8States {
    CONNECTION14_SYNAPSE8_L,
};

// connection14_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse8States state;
} Connection14Synapse8;

// connection14_synapse8 Initialisation function
void Connection14Synapse8Init(Connection14Synapse8* me);

// connection14_synapse8 Execution function
void Connection14Synapse8Run(Connection14Synapse8* me);

#endif // CONNECTION14_SYNAPSE8_H_