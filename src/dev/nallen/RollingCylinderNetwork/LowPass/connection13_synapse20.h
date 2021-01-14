#ifndef CONNECTION13_SYNAPSE20_H_
#define CONNECTION13_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse20 States
enum Connection13Synapse20States {
    CONNECTION13_SYNAPSE20_L,
};

// connection13_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse20States state;
} Connection13Synapse20;

// connection13_synapse20 Initialisation function
void Connection13Synapse20Init(Connection13Synapse20* me);

// connection13_synapse20 Execution function
void Connection13Synapse20Run(Connection13Synapse20* me);

#endif // CONNECTION13_SYNAPSE20_H_