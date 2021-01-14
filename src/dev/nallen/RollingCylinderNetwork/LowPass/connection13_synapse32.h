#ifndef CONNECTION13_SYNAPSE32_H_
#define CONNECTION13_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse32 States
enum Connection13Synapse32States {
    CONNECTION13_SYNAPSE32_L,
};

// connection13_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse32States state;
} Connection13Synapse32;

// connection13_synapse32 Initialisation function
void Connection13Synapse32Init(Connection13Synapse32* me);

// connection13_synapse32 Execution function
void Connection13Synapse32Run(Connection13Synapse32* me);

#endif // CONNECTION13_SYNAPSE32_H_