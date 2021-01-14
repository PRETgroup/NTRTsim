#ifndef CONNECTION13_SYNAPSE3_H_
#define CONNECTION13_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse3 States
enum Connection13Synapse3States {
    CONNECTION13_SYNAPSE3_L,
};

// connection13_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse3States state;
} Connection13Synapse3;

// connection13_synapse3 Initialisation function
void Connection13Synapse3Init(Connection13Synapse3* me);

// connection13_synapse3 Execution function
void Connection13Synapse3Run(Connection13Synapse3* me);

#endif // CONNECTION13_SYNAPSE3_H_