#ifndef CONNECTION13_SYNAPSE72_H_
#define CONNECTION13_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse72 States
enum Connection13Synapse72States {
    CONNECTION13_SYNAPSE72_L,
};

// connection13_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse72States state;
} Connection13Synapse72;

// connection13_synapse72 Initialisation function
void Connection13Synapse72Init(Connection13Synapse72* me);

// connection13_synapse72 Execution function
void Connection13Synapse72Run(Connection13Synapse72* me);

#endif // CONNECTION13_SYNAPSE72_H_