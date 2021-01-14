#ifndef CONNECTION13_SYNAPSE77_H_
#define CONNECTION13_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse77 States
enum Connection13Synapse77States {
    CONNECTION13_SYNAPSE77_L,
};

// connection13_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse77States state;
} Connection13Synapse77;

// connection13_synapse77 Initialisation function
void Connection13Synapse77Init(Connection13Synapse77* me);

// connection13_synapse77 Execution function
void Connection13Synapse77Run(Connection13Synapse77* me);

#endif // CONNECTION13_SYNAPSE77_H_