#ifndef CONNECTION13_SYNAPSE99_H_
#define CONNECTION13_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse99 States
enum Connection13Synapse99States {
    CONNECTION13_SYNAPSE99_L,
};

// connection13_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse99States state;
} Connection13Synapse99;

// connection13_synapse99 Initialisation function
void Connection13Synapse99Init(Connection13Synapse99* me);

// connection13_synapse99 Execution function
void Connection13Synapse99Run(Connection13Synapse99* me);

#endif // CONNECTION13_SYNAPSE99_H_