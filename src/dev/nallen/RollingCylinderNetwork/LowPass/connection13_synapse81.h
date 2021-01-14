#ifndef CONNECTION13_SYNAPSE81_H_
#define CONNECTION13_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse81 States
enum Connection13Synapse81States {
    CONNECTION13_SYNAPSE81_L,
};

// connection13_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse81States state;
} Connection13Synapse81;

// connection13_synapse81 Initialisation function
void Connection13Synapse81Init(Connection13Synapse81* me);

// connection13_synapse81 Execution function
void Connection13Synapse81Run(Connection13Synapse81* me);

#endif // CONNECTION13_SYNAPSE81_H_