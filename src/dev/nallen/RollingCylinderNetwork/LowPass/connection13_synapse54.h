#ifndef CONNECTION13_SYNAPSE54_H_
#define CONNECTION13_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse54 States
enum Connection13Synapse54States {
    CONNECTION13_SYNAPSE54_L,
};

// connection13_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse54States state;
} Connection13Synapse54;

// connection13_synapse54 Initialisation function
void Connection13Synapse54Init(Connection13Synapse54* me);

// connection13_synapse54 Execution function
void Connection13Synapse54Run(Connection13Synapse54* me);

#endif // CONNECTION13_SYNAPSE54_H_