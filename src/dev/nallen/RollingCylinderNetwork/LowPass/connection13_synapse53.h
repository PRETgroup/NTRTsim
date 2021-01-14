#ifndef CONNECTION13_SYNAPSE53_H_
#define CONNECTION13_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse53 States
enum Connection13Synapse53States {
    CONNECTION13_SYNAPSE53_L,
};

// connection13_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse53States state;
} Connection13Synapse53;

// connection13_synapse53 Initialisation function
void Connection13Synapse53Init(Connection13Synapse53* me);

// connection13_synapse53 Execution function
void Connection13Synapse53Run(Connection13Synapse53* me);

#endif // CONNECTION13_SYNAPSE53_H_