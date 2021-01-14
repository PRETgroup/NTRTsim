#ifndef CONNECTION13_SYNAPSE12_H_
#define CONNECTION13_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse12 States
enum Connection13Synapse12States {
    CONNECTION13_SYNAPSE12_L,
};

// connection13_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse12States state;
} Connection13Synapse12;

// connection13_synapse12 Initialisation function
void Connection13Synapse12Init(Connection13Synapse12* me);

// connection13_synapse12 Execution function
void Connection13Synapse12Run(Connection13Synapse12* me);

#endif // CONNECTION13_SYNAPSE12_H_