#ifndef CONNECTION13_SYNAPSE41_H_
#define CONNECTION13_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse41 States
enum Connection13Synapse41States {
    CONNECTION13_SYNAPSE41_L,
};

// connection13_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse41States state;
} Connection13Synapse41;

// connection13_synapse41 Initialisation function
void Connection13Synapse41Init(Connection13Synapse41* me);

// connection13_synapse41 Execution function
void Connection13Synapse41Run(Connection13Synapse41* me);

#endif // CONNECTION13_SYNAPSE41_H_