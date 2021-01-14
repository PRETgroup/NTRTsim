#ifndef CONNECTION13_SYNAPSE48_H_
#define CONNECTION13_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse48 States
enum Connection13Synapse48States {
    CONNECTION13_SYNAPSE48_L,
};

// connection13_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse48States state;
} Connection13Synapse48;

// connection13_synapse48 Initialisation function
void Connection13Synapse48Init(Connection13Synapse48* me);

// connection13_synapse48 Execution function
void Connection13Synapse48Run(Connection13Synapse48* me);

#endif // CONNECTION13_SYNAPSE48_H_