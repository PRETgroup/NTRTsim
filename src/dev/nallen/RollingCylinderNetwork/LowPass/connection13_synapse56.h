#ifndef CONNECTION13_SYNAPSE56_H_
#define CONNECTION13_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse56 States
enum Connection13Synapse56States {
    CONNECTION13_SYNAPSE56_L,
};

// connection13_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse56States state;
} Connection13Synapse56;

// connection13_synapse56 Initialisation function
void Connection13Synapse56Init(Connection13Synapse56* me);

// connection13_synapse56 Execution function
void Connection13Synapse56Run(Connection13Synapse56* me);

#endif // CONNECTION13_SYNAPSE56_H_