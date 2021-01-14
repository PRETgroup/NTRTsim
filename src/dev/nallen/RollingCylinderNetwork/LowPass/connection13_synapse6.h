#ifndef CONNECTION13_SYNAPSE6_H_
#define CONNECTION13_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse6 States
enum Connection13Synapse6States {
    CONNECTION13_SYNAPSE6_L,
};

// connection13_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse6States state;
} Connection13Synapse6;

// connection13_synapse6 Initialisation function
void Connection13Synapse6Init(Connection13Synapse6* me);

// connection13_synapse6 Execution function
void Connection13Synapse6Run(Connection13Synapse6* me);

#endif // CONNECTION13_SYNAPSE6_H_