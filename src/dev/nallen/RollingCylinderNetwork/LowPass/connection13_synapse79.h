#ifndef CONNECTION13_SYNAPSE79_H_
#define CONNECTION13_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse79 States
enum Connection13Synapse79States {
    CONNECTION13_SYNAPSE79_L,
};

// connection13_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse79States state;
} Connection13Synapse79;

// connection13_synapse79 Initialisation function
void Connection13Synapse79Init(Connection13Synapse79* me);

// connection13_synapse79 Execution function
void Connection13Synapse79Run(Connection13Synapse79* me);

#endif // CONNECTION13_SYNAPSE79_H_