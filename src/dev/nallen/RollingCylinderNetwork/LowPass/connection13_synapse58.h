#ifndef CONNECTION13_SYNAPSE58_H_
#define CONNECTION13_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse58 States
enum Connection13Synapse58States {
    CONNECTION13_SYNAPSE58_L,
};

// connection13_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse58States state;
} Connection13Synapse58;

// connection13_synapse58 Initialisation function
void Connection13Synapse58Init(Connection13Synapse58* me);

// connection13_synapse58 Execution function
void Connection13Synapse58Run(Connection13Synapse58* me);

#endif // CONNECTION13_SYNAPSE58_H_