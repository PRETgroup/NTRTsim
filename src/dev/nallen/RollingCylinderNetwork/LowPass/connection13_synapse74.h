#ifndef CONNECTION13_SYNAPSE74_H_
#define CONNECTION13_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse74 States
enum Connection13Synapse74States {
    CONNECTION13_SYNAPSE74_L,
};

// connection13_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse74States state;
} Connection13Synapse74;

// connection13_synapse74 Initialisation function
void Connection13Synapse74Init(Connection13Synapse74* me);

// connection13_synapse74 Execution function
void Connection13Synapse74Run(Connection13Synapse74* me);

#endif // CONNECTION13_SYNAPSE74_H_