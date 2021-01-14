#ifndef CONNECTION13_SYNAPSE2_H_
#define CONNECTION13_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse2 States
enum Connection13Synapse2States {
    CONNECTION13_SYNAPSE2_L,
};

// connection13_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse2States state;
} Connection13Synapse2;

// connection13_synapse2 Initialisation function
void Connection13Synapse2Init(Connection13Synapse2* me);

// connection13_synapse2 Execution function
void Connection13Synapse2Run(Connection13Synapse2* me);

#endif // CONNECTION13_SYNAPSE2_H_