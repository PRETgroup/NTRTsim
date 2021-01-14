#ifndef CONNECTION13_SYNAPSE40_H_
#define CONNECTION13_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse40 States
enum Connection13Synapse40States {
    CONNECTION13_SYNAPSE40_L,
};

// connection13_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse40States state;
} Connection13Synapse40;

// connection13_synapse40 Initialisation function
void Connection13Synapse40Init(Connection13Synapse40* me);

// connection13_synapse40 Execution function
void Connection13Synapse40Run(Connection13Synapse40* me);

#endif // CONNECTION13_SYNAPSE40_H_