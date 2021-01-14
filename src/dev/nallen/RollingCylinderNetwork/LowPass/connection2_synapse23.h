#ifndef CONNECTION2_SYNAPSE23_H_
#define CONNECTION2_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse23 States
enum Connection2Synapse23States {
    CONNECTION2_SYNAPSE23_L,
};

// connection2_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse23States state;
} Connection2Synapse23;

// connection2_synapse23 Initialisation function
void Connection2Synapse23Init(Connection2Synapse23* me);

// connection2_synapse23 Execution function
void Connection2Synapse23Run(Connection2Synapse23* me);

#endif // CONNECTION2_SYNAPSE23_H_