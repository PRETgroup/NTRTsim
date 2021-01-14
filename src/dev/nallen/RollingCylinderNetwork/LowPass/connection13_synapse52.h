#ifndef CONNECTION13_SYNAPSE52_H_
#define CONNECTION13_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse52 States
enum Connection13Synapse52States {
    CONNECTION13_SYNAPSE52_L,
};

// connection13_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse52States state;
} Connection13Synapse52;

// connection13_synapse52 Initialisation function
void Connection13Synapse52Init(Connection13Synapse52* me);

// connection13_synapse52 Execution function
void Connection13Synapse52Run(Connection13Synapse52* me);

#endif // CONNECTION13_SYNAPSE52_H_