#ifndef CONNECTION13_SYNAPSE43_H_
#define CONNECTION13_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse43 States
enum Connection13Synapse43States {
    CONNECTION13_SYNAPSE43_L,
};

// connection13_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse43States state;
} Connection13Synapse43;

// connection13_synapse43 Initialisation function
void Connection13Synapse43Init(Connection13Synapse43* me);

// connection13_synapse43 Execution function
void Connection13Synapse43Run(Connection13Synapse43* me);

#endif // CONNECTION13_SYNAPSE43_H_