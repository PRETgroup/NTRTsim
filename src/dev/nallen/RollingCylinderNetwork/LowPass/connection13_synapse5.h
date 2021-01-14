#ifndef CONNECTION13_SYNAPSE5_H_
#define CONNECTION13_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse5 States
enum Connection13Synapse5States {
    CONNECTION13_SYNAPSE5_L,
};

// connection13_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse5States state;
} Connection13Synapse5;

// connection13_synapse5 Initialisation function
void Connection13Synapse5Init(Connection13Synapse5* me);

// connection13_synapse5 Execution function
void Connection13Synapse5Run(Connection13Synapse5* me);

#endif // CONNECTION13_SYNAPSE5_H_