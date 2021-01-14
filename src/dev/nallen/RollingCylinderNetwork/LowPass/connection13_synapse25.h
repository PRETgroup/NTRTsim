#ifndef CONNECTION13_SYNAPSE25_H_
#define CONNECTION13_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse25 States
enum Connection13Synapse25States {
    CONNECTION13_SYNAPSE25_L,
};

// connection13_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse25States state;
} Connection13Synapse25;

// connection13_synapse25 Initialisation function
void Connection13Synapse25Init(Connection13Synapse25* me);

// connection13_synapse25 Execution function
void Connection13Synapse25Run(Connection13Synapse25* me);

#endif // CONNECTION13_SYNAPSE25_H_