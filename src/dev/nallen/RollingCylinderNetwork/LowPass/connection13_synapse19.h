#ifndef CONNECTION13_SYNAPSE19_H_
#define CONNECTION13_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse19 States
enum Connection13Synapse19States {
    CONNECTION13_SYNAPSE19_L,
};

// connection13_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse19States state;
} Connection13Synapse19;

// connection13_synapse19 Initialisation function
void Connection13Synapse19Init(Connection13Synapse19* me);

// connection13_synapse19 Execution function
void Connection13Synapse19Run(Connection13Synapse19* me);

#endif // CONNECTION13_SYNAPSE19_H_