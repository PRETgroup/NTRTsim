#ifndef CONNECTION13_SYNAPSE64_H_
#define CONNECTION13_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse64 States
enum Connection13Synapse64States {
    CONNECTION13_SYNAPSE64_L,
};

// connection13_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse64States state;
} Connection13Synapse64;

// connection13_synapse64 Initialisation function
void Connection13Synapse64Init(Connection13Synapse64* me);

// connection13_synapse64 Execution function
void Connection13Synapse64Run(Connection13Synapse64* me);

#endif // CONNECTION13_SYNAPSE64_H_