#ifndef CONNECTION13_SYNAPSE24_H_
#define CONNECTION13_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse24 States
enum Connection13Synapse24States {
    CONNECTION13_SYNAPSE24_L,
};

// connection13_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse24States state;
} Connection13Synapse24;

// connection13_synapse24 Initialisation function
void Connection13Synapse24Init(Connection13Synapse24* me);

// connection13_synapse24 Execution function
void Connection13Synapse24Run(Connection13Synapse24* me);

#endif // CONNECTION13_SYNAPSE24_H_