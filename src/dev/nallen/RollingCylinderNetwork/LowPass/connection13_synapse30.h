#ifndef CONNECTION13_SYNAPSE30_H_
#define CONNECTION13_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse30 States
enum Connection13Synapse30States {
    CONNECTION13_SYNAPSE30_L,
};

// connection13_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse30States state;
} Connection13Synapse30;

// connection13_synapse30 Initialisation function
void Connection13Synapse30Init(Connection13Synapse30* me);

// connection13_synapse30 Execution function
void Connection13Synapse30Run(Connection13Synapse30* me);

#endif // CONNECTION13_SYNAPSE30_H_