#ifndef CONNECTION13_SYNAPSE97_H_
#define CONNECTION13_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse97 States
enum Connection13Synapse97States {
    CONNECTION13_SYNAPSE97_L,
};

// connection13_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse97States state;
} Connection13Synapse97;

// connection13_synapse97 Initialisation function
void Connection13Synapse97Init(Connection13Synapse97* me);

// connection13_synapse97 Execution function
void Connection13Synapse97Run(Connection13Synapse97* me);

#endif // CONNECTION13_SYNAPSE97_H_