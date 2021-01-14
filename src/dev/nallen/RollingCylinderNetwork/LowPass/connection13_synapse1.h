#ifndef CONNECTION13_SYNAPSE1_H_
#define CONNECTION13_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse1 States
enum Connection13Synapse1States {
    CONNECTION13_SYNAPSE1_L,
};

// connection13_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse1States state;
} Connection13Synapse1;

// connection13_synapse1 Initialisation function
void Connection13Synapse1Init(Connection13Synapse1* me);

// connection13_synapse1 Execution function
void Connection13Synapse1Run(Connection13Synapse1* me);

#endif // CONNECTION13_SYNAPSE1_H_