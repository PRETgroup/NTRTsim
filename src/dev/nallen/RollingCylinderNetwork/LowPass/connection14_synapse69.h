#ifndef CONNECTION14_SYNAPSE69_H_
#define CONNECTION14_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse69 States
enum Connection14Synapse69States {
    CONNECTION14_SYNAPSE69_L,
};

// connection14_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse69States state;
} Connection14Synapse69;

// connection14_synapse69 Initialisation function
void Connection14Synapse69Init(Connection14Synapse69* me);

// connection14_synapse69 Execution function
void Connection14Synapse69Run(Connection14Synapse69* me);

#endif // CONNECTION14_SYNAPSE69_H_