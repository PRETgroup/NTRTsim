#ifndef CONNECTION13_SYNAPSE90_H_
#define CONNECTION13_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse90 States
enum Connection13Synapse90States {
    CONNECTION13_SYNAPSE90_L,
};

// connection13_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse90States state;
} Connection13Synapse90;

// connection13_synapse90 Initialisation function
void Connection13Synapse90Init(Connection13Synapse90* me);

// connection13_synapse90 Execution function
void Connection13Synapse90Run(Connection13Synapse90* me);

#endif // CONNECTION13_SYNAPSE90_H_