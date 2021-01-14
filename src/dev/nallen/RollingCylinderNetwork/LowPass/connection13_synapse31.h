#ifndef CONNECTION13_SYNAPSE31_H_
#define CONNECTION13_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse31 States
enum Connection13Synapse31States {
    CONNECTION13_SYNAPSE31_L,
};

// connection13_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse31States state;
} Connection13Synapse31;

// connection13_synapse31 Initialisation function
void Connection13Synapse31Init(Connection13Synapse31* me);

// connection13_synapse31 Execution function
void Connection13Synapse31Run(Connection13Synapse31* me);

#endif // CONNECTION13_SYNAPSE31_H_