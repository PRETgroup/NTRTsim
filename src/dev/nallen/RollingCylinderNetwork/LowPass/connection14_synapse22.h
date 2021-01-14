#ifndef CONNECTION14_SYNAPSE22_H_
#define CONNECTION14_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse22 States
enum Connection14Synapse22States {
    CONNECTION14_SYNAPSE22_L,
};

// connection14_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse22States state;
} Connection14Synapse22;

// connection14_synapse22 Initialisation function
void Connection14Synapse22Init(Connection14Synapse22* me);

// connection14_synapse22 Execution function
void Connection14Synapse22Run(Connection14Synapse22* me);

#endif // CONNECTION14_SYNAPSE22_H_