#ifndef CONNECTION13_SYNAPSE33_H_
#define CONNECTION13_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse33 States
enum Connection13Synapse33States {
    CONNECTION13_SYNAPSE33_L,
};

// connection13_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse33States state;
} Connection13Synapse33;

// connection13_synapse33 Initialisation function
void Connection13Synapse33Init(Connection13Synapse33* me);

// connection13_synapse33 Execution function
void Connection13Synapse33Run(Connection13Synapse33* me);

#endif // CONNECTION13_SYNAPSE33_H_