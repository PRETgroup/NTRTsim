#ifndef CONNECTION13_SYNAPSE68_H_
#define CONNECTION13_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse68 States
enum Connection13Synapse68States {
    CONNECTION13_SYNAPSE68_L,
};

// connection13_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse68States state;
} Connection13Synapse68;

// connection13_synapse68 Initialisation function
void Connection13Synapse68Init(Connection13Synapse68* me);

// connection13_synapse68 Execution function
void Connection13Synapse68Run(Connection13Synapse68* me);

#endif // CONNECTION13_SYNAPSE68_H_