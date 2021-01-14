#ifndef CONNECTION13_SYNAPSE59_H_
#define CONNECTION13_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse59 States
enum Connection13Synapse59States {
    CONNECTION13_SYNAPSE59_L,
};

// connection13_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse59States state;
} Connection13Synapse59;

// connection13_synapse59 Initialisation function
void Connection13Synapse59Init(Connection13Synapse59* me);

// connection13_synapse59 Execution function
void Connection13Synapse59Run(Connection13Synapse59* me);

#endif // CONNECTION13_SYNAPSE59_H_