#ifndef CONNECTION13_SYNAPSE38_H_
#define CONNECTION13_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse38 States
enum Connection13Synapse38States {
    CONNECTION13_SYNAPSE38_L,
};

// connection13_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse38States state;
} Connection13Synapse38;

// connection13_synapse38 Initialisation function
void Connection13Synapse38Init(Connection13Synapse38* me);

// connection13_synapse38 Execution function
void Connection13Synapse38Run(Connection13Synapse38* me);

#endif // CONNECTION13_SYNAPSE38_H_