#ifndef CONNECTION13_SYNAPSE63_H_
#define CONNECTION13_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse63 States
enum Connection13Synapse63States {
    CONNECTION13_SYNAPSE63_L,
};

// connection13_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse63States state;
} Connection13Synapse63;

// connection13_synapse63 Initialisation function
void Connection13Synapse63Init(Connection13Synapse63* me);

// connection13_synapse63 Execution function
void Connection13Synapse63Run(Connection13Synapse63* me);

#endif // CONNECTION13_SYNAPSE63_H_