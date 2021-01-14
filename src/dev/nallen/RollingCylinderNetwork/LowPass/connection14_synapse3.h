#ifndef CONNECTION14_SYNAPSE3_H_
#define CONNECTION14_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse3 States
enum Connection14Synapse3States {
    CONNECTION14_SYNAPSE3_L,
};

// connection14_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse3States state;
} Connection14Synapse3;

// connection14_synapse3 Initialisation function
void Connection14Synapse3Init(Connection14Synapse3* me);

// connection14_synapse3 Execution function
void Connection14Synapse3Run(Connection14Synapse3* me);

#endif // CONNECTION14_SYNAPSE3_H_