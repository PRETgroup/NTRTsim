#ifndef CONNECTION13_SYNAPSE57_H_
#define CONNECTION13_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse57 States
enum Connection13Synapse57States {
    CONNECTION13_SYNAPSE57_L,
};

// connection13_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse57States state;
} Connection13Synapse57;

// connection13_synapse57 Initialisation function
void Connection13Synapse57Init(Connection13Synapse57* me);

// connection13_synapse57 Execution function
void Connection13Synapse57Run(Connection13Synapse57* me);

#endif // CONNECTION13_SYNAPSE57_H_