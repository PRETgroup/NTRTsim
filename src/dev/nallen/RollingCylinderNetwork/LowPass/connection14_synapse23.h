#ifndef CONNECTION14_SYNAPSE23_H_
#define CONNECTION14_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse23 States
enum Connection14Synapse23States {
    CONNECTION14_SYNAPSE23_L,
};

// connection14_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse23States state;
} Connection14Synapse23;

// connection14_synapse23 Initialisation function
void Connection14Synapse23Init(Connection14Synapse23* me);

// connection14_synapse23 Execution function
void Connection14Synapse23Run(Connection14Synapse23* me);

#endif // CONNECTION14_SYNAPSE23_H_