#ifndef CONNECTION13_SYNAPSE22_H_
#define CONNECTION13_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse22 States
enum Connection13Synapse22States {
    CONNECTION13_SYNAPSE22_L,
};

// connection13_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse22States state;
} Connection13Synapse22;

// connection13_synapse22 Initialisation function
void Connection13Synapse22Init(Connection13Synapse22* me);

// connection13_synapse22 Execution function
void Connection13Synapse22Run(Connection13Synapse22* me);

#endif // CONNECTION13_SYNAPSE22_H_