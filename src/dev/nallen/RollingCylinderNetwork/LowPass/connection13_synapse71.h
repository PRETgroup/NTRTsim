#ifndef CONNECTION13_SYNAPSE71_H_
#define CONNECTION13_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse71 States
enum Connection13Synapse71States {
    CONNECTION13_SYNAPSE71_L,
};

// connection13_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse71States state;
} Connection13Synapse71;

// connection13_synapse71 Initialisation function
void Connection13Synapse71Init(Connection13Synapse71* me);

// connection13_synapse71 Execution function
void Connection13Synapse71Run(Connection13Synapse71* me);

#endif // CONNECTION13_SYNAPSE71_H_