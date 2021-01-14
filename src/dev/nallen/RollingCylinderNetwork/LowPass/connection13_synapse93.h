#ifndef CONNECTION13_SYNAPSE93_H_
#define CONNECTION13_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse93 States
enum Connection13Synapse93States {
    CONNECTION13_SYNAPSE93_L,
};

// connection13_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse93States state;
} Connection13Synapse93;

// connection13_synapse93 Initialisation function
void Connection13Synapse93Init(Connection13Synapse93* me);

// connection13_synapse93 Execution function
void Connection13Synapse93Run(Connection13Synapse93* me);

#endif // CONNECTION13_SYNAPSE93_H_