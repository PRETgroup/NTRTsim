#ifndef CONNECTION14_SYNAPSE40_H_
#define CONNECTION14_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse40 States
enum Connection14Synapse40States {
    CONNECTION14_SYNAPSE40_L,
};

// connection14_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse40States state;
} Connection14Synapse40;

// connection14_synapse40 Initialisation function
void Connection14Synapse40Init(Connection14Synapse40* me);

// connection14_synapse40 Execution function
void Connection14Synapse40Run(Connection14Synapse40* me);

#endif // CONNECTION14_SYNAPSE40_H_