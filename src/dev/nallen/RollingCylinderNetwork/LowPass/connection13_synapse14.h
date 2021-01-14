#ifndef CONNECTION13_SYNAPSE14_H_
#define CONNECTION13_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse14 States
enum Connection13Synapse14States {
    CONNECTION13_SYNAPSE14_L,
};

// connection13_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse14States state;
} Connection13Synapse14;

// connection13_synapse14 Initialisation function
void Connection13Synapse14Init(Connection13Synapse14* me);

// connection13_synapse14 Execution function
void Connection13Synapse14Run(Connection13Synapse14* me);

#endif // CONNECTION13_SYNAPSE14_H_