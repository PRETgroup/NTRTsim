#ifndef CONNECTION13_SYNAPSE61_H_
#define CONNECTION13_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse61 States
enum Connection13Synapse61States {
    CONNECTION13_SYNAPSE61_L,
};

// connection13_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse61States state;
} Connection13Synapse61;

// connection13_synapse61 Initialisation function
void Connection13Synapse61Init(Connection13Synapse61* me);

// connection13_synapse61 Execution function
void Connection13Synapse61Run(Connection13Synapse61* me);

#endif // CONNECTION13_SYNAPSE61_H_