#ifndef CONNECTION13_SYNAPSE60_H_
#define CONNECTION13_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse60 States
enum Connection13Synapse60States {
    CONNECTION13_SYNAPSE60_L,
};

// connection13_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse60States state;
} Connection13Synapse60;

// connection13_synapse60 Initialisation function
void Connection13Synapse60Init(Connection13Synapse60* me);

// connection13_synapse60 Execution function
void Connection13Synapse60Run(Connection13Synapse60* me);

#endif // CONNECTION13_SYNAPSE60_H_