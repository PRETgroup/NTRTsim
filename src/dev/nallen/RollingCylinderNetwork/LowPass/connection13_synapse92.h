#ifndef CONNECTION13_SYNAPSE92_H_
#define CONNECTION13_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse92 States
enum Connection13Synapse92States {
    CONNECTION13_SYNAPSE92_L,
};

// connection13_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse92States state;
} Connection13Synapse92;

// connection13_synapse92 Initialisation function
void Connection13Synapse92Init(Connection13Synapse92* me);

// connection13_synapse92 Execution function
void Connection13Synapse92Run(Connection13Synapse92* me);

#endif // CONNECTION13_SYNAPSE92_H_