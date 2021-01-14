#ifndef CONNECTION13_SYNAPSE76_H_
#define CONNECTION13_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse76 States
enum Connection13Synapse76States {
    CONNECTION13_SYNAPSE76_L,
};

// connection13_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse76States state;
} Connection13Synapse76;

// connection13_synapse76 Initialisation function
void Connection13Synapse76Init(Connection13Synapse76* me);

// connection13_synapse76 Execution function
void Connection13Synapse76Run(Connection13Synapse76* me);

#endif // CONNECTION13_SYNAPSE76_H_