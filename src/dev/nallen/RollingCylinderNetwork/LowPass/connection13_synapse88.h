#ifndef CONNECTION13_SYNAPSE88_H_
#define CONNECTION13_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse88 States
enum Connection13Synapse88States {
    CONNECTION13_SYNAPSE88_L,
};

// connection13_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse88States state;
} Connection13Synapse88;

// connection13_synapse88 Initialisation function
void Connection13Synapse88Init(Connection13Synapse88* me);

// connection13_synapse88 Execution function
void Connection13Synapse88Run(Connection13Synapse88* me);

#endif // CONNECTION13_SYNAPSE88_H_