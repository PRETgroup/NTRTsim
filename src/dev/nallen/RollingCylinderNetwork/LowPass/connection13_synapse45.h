#ifndef CONNECTION13_SYNAPSE45_H_
#define CONNECTION13_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse45 States
enum Connection13Synapse45States {
    CONNECTION13_SYNAPSE45_L,
};

// connection13_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse45States state;
} Connection13Synapse45;

// connection13_synapse45 Initialisation function
void Connection13Synapse45Init(Connection13Synapse45* me);

// connection13_synapse45 Execution function
void Connection13Synapse45Run(Connection13Synapse45* me);

#endif // CONNECTION13_SYNAPSE45_H_