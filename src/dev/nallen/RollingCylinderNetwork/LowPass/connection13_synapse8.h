#ifndef CONNECTION13_SYNAPSE8_H_
#define CONNECTION13_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse8 States
enum Connection13Synapse8States {
    CONNECTION13_SYNAPSE8_L,
};

// connection13_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse8States state;
} Connection13Synapse8;

// connection13_synapse8 Initialisation function
void Connection13Synapse8Init(Connection13Synapse8* me);

// connection13_synapse8 Execution function
void Connection13Synapse8Run(Connection13Synapse8* me);

#endif // CONNECTION13_SYNAPSE8_H_