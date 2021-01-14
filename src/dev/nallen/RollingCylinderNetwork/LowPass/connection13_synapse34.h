#ifndef CONNECTION13_SYNAPSE34_H_
#define CONNECTION13_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse34 States
enum Connection13Synapse34States {
    CONNECTION13_SYNAPSE34_L,
};

// connection13_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse34States state;
} Connection13Synapse34;

// connection13_synapse34 Initialisation function
void Connection13Synapse34Init(Connection13Synapse34* me);

// connection13_synapse34 Execution function
void Connection13Synapse34Run(Connection13Synapse34* me);

#endif // CONNECTION13_SYNAPSE34_H_