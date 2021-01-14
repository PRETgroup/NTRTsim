#ifndef CONNECTION13_SYNAPSE80_H_
#define CONNECTION13_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse80 States
enum Connection13Synapse80States {
    CONNECTION13_SYNAPSE80_L,
};

// connection13_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse80States state;
} Connection13Synapse80;

// connection13_synapse80 Initialisation function
void Connection13Synapse80Init(Connection13Synapse80* me);

// connection13_synapse80 Execution function
void Connection13Synapse80Run(Connection13Synapse80* me);

#endif // CONNECTION13_SYNAPSE80_H_