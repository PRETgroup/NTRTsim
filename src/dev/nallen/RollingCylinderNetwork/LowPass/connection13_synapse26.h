#ifndef CONNECTION13_SYNAPSE26_H_
#define CONNECTION13_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse26 States
enum Connection13Synapse26States {
    CONNECTION13_SYNAPSE26_L,
};

// connection13_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse26States state;
} Connection13Synapse26;

// connection13_synapse26 Initialisation function
void Connection13Synapse26Init(Connection13Synapse26* me);

// connection13_synapse26 Execution function
void Connection13Synapse26Run(Connection13Synapse26* me);

#endif // CONNECTION13_SYNAPSE26_H_