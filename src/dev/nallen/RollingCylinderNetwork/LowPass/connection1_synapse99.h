#ifndef CONNECTION1_SYNAPSE99_H_
#define CONNECTION1_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse99 States
enum Connection1Synapse99States {
    CONNECTION1_SYNAPSE99_L,
};

// connection1_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse99States state;
} Connection1Synapse99;

// connection1_synapse99 Initialisation function
void Connection1Synapse99Init(Connection1Synapse99* me);

// connection1_synapse99 Execution function
void Connection1Synapse99Run(Connection1Synapse99* me);

#endif // CONNECTION1_SYNAPSE99_H_