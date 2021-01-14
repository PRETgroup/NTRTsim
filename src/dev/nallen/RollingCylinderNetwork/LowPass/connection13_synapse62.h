#ifndef CONNECTION13_SYNAPSE62_H_
#define CONNECTION13_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse62 States
enum Connection13Synapse62States {
    CONNECTION13_SYNAPSE62_L,
};

// connection13_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse62States state;
} Connection13Synapse62;

// connection13_synapse62 Initialisation function
void Connection13Synapse62Init(Connection13Synapse62* me);

// connection13_synapse62 Execution function
void Connection13Synapse62Run(Connection13Synapse62* me);

#endif // CONNECTION13_SYNAPSE62_H_