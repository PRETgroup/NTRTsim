#ifndef CONNECTION13_SYNAPSE46_H_
#define CONNECTION13_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse46 States
enum Connection13Synapse46States {
    CONNECTION13_SYNAPSE46_L,
};

// connection13_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse46States state;
} Connection13Synapse46;

// connection13_synapse46 Initialisation function
void Connection13Synapse46Init(Connection13Synapse46* me);

// connection13_synapse46 Execution function
void Connection13Synapse46Run(Connection13Synapse46* me);

#endif // CONNECTION13_SYNAPSE46_H_