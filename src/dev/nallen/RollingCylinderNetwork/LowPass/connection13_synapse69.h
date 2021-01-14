#ifndef CONNECTION13_SYNAPSE69_H_
#define CONNECTION13_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse69 States
enum Connection13Synapse69States {
    CONNECTION13_SYNAPSE69_L,
};

// connection13_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse69States state;
} Connection13Synapse69;

// connection13_synapse69 Initialisation function
void Connection13Synapse69Init(Connection13Synapse69* me);

// connection13_synapse69 Execution function
void Connection13Synapse69Run(Connection13Synapse69* me);

#endif // CONNECTION13_SYNAPSE69_H_