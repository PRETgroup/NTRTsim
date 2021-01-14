#ifndef CONNECTION13_SYNAPSE11_H_
#define CONNECTION13_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse11 States
enum Connection13Synapse11States {
    CONNECTION13_SYNAPSE11_L,
};

// connection13_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse11States state;
} Connection13Synapse11;

// connection13_synapse11 Initialisation function
void Connection13Synapse11Init(Connection13Synapse11* me);

// connection13_synapse11 Execution function
void Connection13Synapse11Run(Connection13Synapse11* me);

#endif // CONNECTION13_SYNAPSE11_H_