#ifndef CONNECTION13_SYNAPSE95_H_
#define CONNECTION13_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse95 States
enum Connection13Synapse95States {
    CONNECTION13_SYNAPSE95_L,
};

// connection13_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse95States state;
} Connection13Synapse95;

// connection13_synapse95 Initialisation function
void Connection13Synapse95Init(Connection13Synapse95* me);

// connection13_synapse95 Execution function
void Connection13Synapse95Run(Connection13Synapse95* me);

#endif // CONNECTION13_SYNAPSE95_H_