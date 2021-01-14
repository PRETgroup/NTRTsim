#ifndef CONNECTION13_SYNAPSE49_H_
#define CONNECTION13_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse49 States
enum Connection13Synapse49States {
    CONNECTION13_SYNAPSE49_L,
};

// connection13_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse49States state;
} Connection13Synapse49;

// connection13_synapse49 Initialisation function
void Connection13Synapse49Init(Connection13Synapse49* me);

// connection13_synapse49 Execution function
void Connection13Synapse49Run(Connection13Synapse49* me);

#endif // CONNECTION13_SYNAPSE49_H_