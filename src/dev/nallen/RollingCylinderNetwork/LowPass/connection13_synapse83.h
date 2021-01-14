#ifndef CONNECTION13_SYNAPSE83_H_
#define CONNECTION13_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse83 States
enum Connection13Synapse83States {
    CONNECTION13_SYNAPSE83_L,
};

// connection13_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse83States state;
} Connection13Synapse83;

// connection13_synapse83 Initialisation function
void Connection13Synapse83Init(Connection13Synapse83* me);

// connection13_synapse83 Execution function
void Connection13Synapse83Run(Connection13Synapse83* me);

#endif // CONNECTION13_SYNAPSE83_H_