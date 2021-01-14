#ifndef CONNECTION14_SYNAPSE60_H_
#define CONNECTION14_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse60 States
enum Connection14Synapse60States {
    CONNECTION14_SYNAPSE60_L,
};

// connection14_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse60States state;
} Connection14Synapse60;

// connection14_synapse60 Initialisation function
void Connection14Synapse60Init(Connection14Synapse60* me);

// connection14_synapse60 Execution function
void Connection14Synapse60Run(Connection14Synapse60* me);

#endif // CONNECTION14_SYNAPSE60_H_