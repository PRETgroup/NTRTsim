#ifndef CONNECTION13_SYNAPSE13_H_
#define CONNECTION13_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse13 States
enum Connection13Synapse13States {
    CONNECTION13_SYNAPSE13_L,
};

// connection13_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse13States state;
} Connection13Synapse13;

// connection13_synapse13 Initialisation function
void Connection13Synapse13Init(Connection13Synapse13* me);

// connection13_synapse13 Execution function
void Connection13Synapse13Run(Connection13Synapse13* me);

#endif // CONNECTION13_SYNAPSE13_H_