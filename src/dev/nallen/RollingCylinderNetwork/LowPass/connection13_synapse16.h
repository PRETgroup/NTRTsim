#ifndef CONNECTION13_SYNAPSE16_H_
#define CONNECTION13_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse16 States
enum Connection13Synapse16States {
    CONNECTION13_SYNAPSE16_L,
};

// connection13_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse16States state;
} Connection13Synapse16;

// connection13_synapse16 Initialisation function
void Connection13Synapse16Init(Connection13Synapse16* me);

// connection13_synapse16 Execution function
void Connection13Synapse16Run(Connection13Synapse16* me);

#endif // CONNECTION13_SYNAPSE16_H_