#ifndef CONNECTION13_SYNAPSE27_H_
#define CONNECTION13_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse27 States
enum Connection13Synapse27States {
    CONNECTION13_SYNAPSE27_L,
};

// connection13_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse27States state;
} Connection13Synapse27;

// connection13_synapse27 Initialisation function
void Connection13Synapse27Init(Connection13Synapse27* me);

// connection13_synapse27 Execution function
void Connection13Synapse27Run(Connection13Synapse27* me);

#endif // CONNECTION13_SYNAPSE27_H_