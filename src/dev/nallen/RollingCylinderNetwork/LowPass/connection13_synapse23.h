#ifndef CONNECTION13_SYNAPSE23_H_
#define CONNECTION13_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse23 States
enum Connection13Synapse23States {
    CONNECTION13_SYNAPSE23_L,
};

// connection13_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse23States state;
} Connection13Synapse23;

// connection13_synapse23 Initialisation function
void Connection13Synapse23Init(Connection13Synapse23* me);

// connection13_synapse23 Execution function
void Connection13Synapse23Run(Connection13Synapse23* me);

#endif // CONNECTION13_SYNAPSE23_H_