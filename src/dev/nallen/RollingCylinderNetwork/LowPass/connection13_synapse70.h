#ifndef CONNECTION13_SYNAPSE70_H_
#define CONNECTION13_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse70 States
enum Connection13Synapse70States {
    CONNECTION13_SYNAPSE70_L,
};

// connection13_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse70States state;
} Connection13Synapse70;

// connection13_synapse70 Initialisation function
void Connection13Synapse70Init(Connection13Synapse70* me);

// connection13_synapse70 Execution function
void Connection13Synapse70Run(Connection13Synapse70* me);

#endif // CONNECTION13_SYNAPSE70_H_