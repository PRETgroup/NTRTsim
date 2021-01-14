#ifndef CONNECTION13_SYNAPSE28_H_
#define CONNECTION13_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse28 States
enum Connection13Synapse28States {
    CONNECTION13_SYNAPSE28_L,
};

// connection13_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse28States state;
} Connection13Synapse28;

// connection13_synapse28 Initialisation function
void Connection13Synapse28Init(Connection13Synapse28* me);

// connection13_synapse28 Execution function
void Connection13Synapse28Run(Connection13Synapse28* me);

#endif // CONNECTION13_SYNAPSE28_H_