#ifndef CONNECTION13_SYNAPSE9_H_
#define CONNECTION13_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse9 States
enum Connection13Synapse9States {
    CONNECTION13_SYNAPSE9_L,
};

// connection13_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse9States state;
} Connection13Synapse9;

// connection13_synapse9 Initialisation function
void Connection13Synapse9Init(Connection13Synapse9* me);

// connection13_synapse9 Execution function
void Connection13Synapse9Run(Connection13Synapse9* me);

#endif // CONNECTION13_SYNAPSE9_H_