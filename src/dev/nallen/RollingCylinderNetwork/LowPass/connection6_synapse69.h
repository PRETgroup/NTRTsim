#ifndef CONNECTION6_SYNAPSE69_H_
#define CONNECTION6_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse69 States
enum Connection6Synapse69States {
    CONNECTION6_SYNAPSE69_L,
};

// connection6_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse69States state;
} Connection6Synapse69;

// connection6_synapse69 Initialisation function
void Connection6Synapse69Init(Connection6Synapse69* me);

// connection6_synapse69 Execution function
void Connection6Synapse69Run(Connection6Synapse69* me);

#endif // CONNECTION6_SYNAPSE69_H_