#ifndef CONNECTION13_SYNAPSE73_H_
#define CONNECTION13_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse73 States
enum Connection13Synapse73States {
    CONNECTION13_SYNAPSE73_L,
};

// connection13_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse73States state;
} Connection13Synapse73;

// connection13_synapse73 Initialisation function
void Connection13Synapse73Init(Connection13Synapse73* me);

// connection13_synapse73 Execution function
void Connection13Synapse73Run(Connection13Synapse73* me);

#endif // CONNECTION13_SYNAPSE73_H_