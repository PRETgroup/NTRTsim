#ifndef CONNECTION13_SYNAPSE36_H_
#define CONNECTION13_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse36 States
enum Connection13Synapse36States {
    CONNECTION13_SYNAPSE36_L,
};

// connection13_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse36States state;
} Connection13Synapse36;

// connection13_synapse36 Initialisation function
void Connection13Synapse36Init(Connection13Synapse36* me);

// connection13_synapse36 Execution function
void Connection13Synapse36Run(Connection13Synapse36* me);

#endif // CONNECTION13_SYNAPSE36_H_