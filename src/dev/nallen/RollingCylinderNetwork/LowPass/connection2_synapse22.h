#ifndef CONNECTION2_SYNAPSE22_H_
#define CONNECTION2_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse22 States
enum Connection2Synapse22States {
    CONNECTION2_SYNAPSE22_L,
};

// connection2_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse22States state;
} Connection2Synapse22;

// connection2_synapse22 Initialisation function
void Connection2Synapse22Init(Connection2Synapse22* me);

// connection2_synapse22 Execution function
void Connection2Synapse22Run(Connection2Synapse22* me);

#endif // CONNECTION2_SYNAPSE22_H_