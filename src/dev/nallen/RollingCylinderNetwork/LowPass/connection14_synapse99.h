#ifndef CONNECTION14_SYNAPSE99_H_
#define CONNECTION14_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse99 States
enum Connection14Synapse99States {
    CONNECTION14_SYNAPSE99_L,
};

// connection14_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse99States state;
} Connection14Synapse99;

// connection14_synapse99 Initialisation function
void Connection14Synapse99Init(Connection14Synapse99* me);

// connection14_synapse99 Execution function
void Connection14Synapse99Run(Connection14Synapse99* me);

#endif // CONNECTION14_SYNAPSE99_H_