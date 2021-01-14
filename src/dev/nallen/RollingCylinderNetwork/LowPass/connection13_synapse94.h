#ifndef CONNECTION13_SYNAPSE94_H_
#define CONNECTION13_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse94 States
enum Connection13Synapse94States {
    CONNECTION13_SYNAPSE94_L,
};

// connection13_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse94States state;
} Connection13Synapse94;

// connection13_synapse94 Initialisation function
void Connection13Synapse94Init(Connection13Synapse94* me);

// connection13_synapse94 Execution function
void Connection13Synapse94Run(Connection13Synapse94* me);

#endif // CONNECTION13_SYNAPSE94_H_