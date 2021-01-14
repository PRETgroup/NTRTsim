#ifndef CONNECTION14_SYNAPSE1_H_
#define CONNECTION14_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse1 States
enum Connection14Synapse1States {
    CONNECTION14_SYNAPSE1_L,
};

// connection14_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse1States state;
} Connection14Synapse1;

// connection14_synapse1 Initialisation function
void Connection14Synapse1Init(Connection14Synapse1* me);

// connection14_synapse1 Execution function
void Connection14Synapse1Run(Connection14Synapse1* me);

#endif // CONNECTION14_SYNAPSE1_H_