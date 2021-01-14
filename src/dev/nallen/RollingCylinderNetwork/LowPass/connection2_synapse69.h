#ifndef CONNECTION2_SYNAPSE69_H_
#define CONNECTION2_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse69 States
enum Connection2Synapse69States {
    CONNECTION2_SYNAPSE69_L,
};

// connection2_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse69States state;
} Connection2Synapse69;

// connection2_synapse69 Initialisation function
void Connection2Synapse69Init(Connection2Synapse69* me);

// connection2_synapse69 Execution function
void Connection2Synapse69Run(Connection2Synapse69* me);

#endif // CONNECTION2_SYNAPSE69_H_