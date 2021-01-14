#ifndef CONNECTION0_SYNAPSE69_H_
#define CONNECTION0_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse69 States
enum Connection0Synapse69States {
    CONNECTION0_SYNAPSE69_L,
};

// connection0_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse69States state;
} Connection0Synapse69;

// connection0_synapse69 Initialisation function
void Connection0Synapse69Init(Connection0Synapse69* me);

// connection0_synapse69 Execution function
void Connection0Synapse69Run(Connection0Synapse69* me);

#endif // CONNECTION0_SYNAPSE69_H_