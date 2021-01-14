#ifndef CONNECTION13_SYNAPSE7_H_
#define CONNECTION13_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse7 States
enum Connection13Synapse7States {
    CONNECTION13_SYNAPSE7_L,
};

// connection13_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse7States state;
} Connection13Synapse7;

// connection13_synapse7 Initialisation function
void Connection13Synapse7Init(Connection13Synapse7* me);

// connection13_synapse7 Execution function
void Connection13Synapse7Run(Connection13Synapse7* me);

#endif // CONNECTION13_SYNAPSE7_H_