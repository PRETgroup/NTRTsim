#ifndef CONNECTION1_SYNAPSE69_H_
#define CONNECTION1_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse69 States
enum Connection1Synapse69States {
    CONNECTION1_SYNAPSE69_L,
};

// connection1_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse69States state;
} Connection1Synapse69;

// connection1_synapse69 Initialisation function
void Connection1Synapse69Init(Connection1Synapse69* me);

// connection1_synapse69 Execution function
void Connection1Synapse69Run(Connection1Synapse69* me);

#endif // CONNECTION1_SYNAPSE69_H_