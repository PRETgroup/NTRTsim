#ifndef CONNECTION13_SYNAPSE87_H_
#define CONNECTION13_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse87 States
enum Connection13Synapse87States {
    CONNECTION13_SYNAPSE87_L,
};

// connection13_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse87States state;
} Connection13Synapse87;

// connection13_synapse87 Initialisation function
void Connection13Synapse87Init(Connection13Synapse87* me);

// connection13_synapse87 Execution function
void Connection13Synapse87Run(Connection13Synapse87* me);

#endif // CONNECTION13_SYNAPSE87_H_