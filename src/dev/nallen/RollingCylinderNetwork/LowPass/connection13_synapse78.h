#ifndef CONNECTION13_SYNAPSE78_H_
#define CONNECTION13_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse78 States
enum Connection13Synapse78States {
    CONNECTION13_SYNAPSE78_L,
};

// connection13_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse78States state;
} Connection13Synapse78;

// connection13_synapse78 Initialisation function
void Connection13Synapse78Init(Connection13Synapse78* me);

// connection13_synapse78 Execution function
void Connection13Synapse78Run(Connection13Synapse78* me);

#endif // CONNECTION13_SYNAPSE78_H_