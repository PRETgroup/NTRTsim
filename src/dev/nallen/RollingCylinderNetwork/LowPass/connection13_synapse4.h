#ifndef CONNECTION13_SYNAPSE4_H_
#define CONNECTION13_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse4 States
enum Connection13Synapse4States {
    CONNECTION13_SYNAPSE4_L,
};

// connection13_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse4States state;
} Connection13Synapse4;

// connection13_synapse4 Initialisation function
void Connection13Synapse4Init(Connection13Synapse4* me);

// connection13_synapse4 Execution function
void Connection13Synapse4Run(Connection13Synapse4* me);

#endif // CONNECTION13_SYNAPSE4_H_