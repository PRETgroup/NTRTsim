#ifndef CONNECTION13_SYNAPSE0_H_
#define CONNECTION13_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse0 States
enum Connection13Synapse0States {
    CONNECTION13_SYNAPSE0_L,
};

// connection13_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse0States state;
} Connection13Synapse0;

// connection13_synapse0 Initialisation function
void Connection13Synapse0Init(Connection13Synapse0* me);

// connection13_synapse0 Execution function
void Connection13Synapse0Run(Connection13Synapse0* me);

#endif // CONNECTION13_SYNAPSE0_H_