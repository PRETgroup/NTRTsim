#ifndef CONNECTION14_SYNAPSE94_H_
#define CONNECTION14_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse94 States
enum Connection14Synapse94States {
    CONNECTION14_SYNAPSE94_L,
};

// connection14_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse94States state;
} Connection14Synapse94;

// connection14_synapse94 Initialisation function
void Connection14Synapse94Init(Connection14Synapse94* me);

// connection14_synapse94 Execution function
void Connection14Synapse94Run(Connection14Synapse94* me);

#endif // CONNECTION14_SYNAPSE94_H_