#ifndef CONNECTION13_SYNAPSE18_H_
#define CONNECTION13_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse18 States
enum Connection13Synapse18States {
    CONNECTION13_SYNAPSE18_L,
};

// connection13_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse18States state;
} Connection13Synapse18;

// connection13_synapse18 Initialisation function
void Connection13Synapse18Init(Connection13Synapse18* me);

// connection13_synapse18 Execution function
void Connection13Synapse18Run(Connection13Synapse18* me);

#endif // CONNECTION13_SYNAPSE18_H_