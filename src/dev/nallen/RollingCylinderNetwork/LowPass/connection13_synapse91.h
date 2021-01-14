#ifndef CONNECTION13_SYNAPSE91_H_
#define CONNECTION13_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse91 States
enum Connection13Synapse91States {
    CONNECTION13_SYNAPSE91_L,
};

// connection13_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse91States state;
} Connection13Synapse91;

// connection13_synapse91 Initialisation function
void Connection13Synapse91Init(Connection13Synapse91* me);

// connection13_synapse91 Execution function
void Connection13Synapse91Run(Connection13Synapse91* me);

#endif // CONNECTION13_SYNAPSE91_H_