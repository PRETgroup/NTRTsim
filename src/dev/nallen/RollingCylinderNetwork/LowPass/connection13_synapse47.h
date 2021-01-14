#ifndef CONNECTION13_SYNAPSE47_H_
#define CONNECTION13_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse47 States
enum Connection13Synapse47States {
    CONNECTION13_SYNAPSE47_L,
};

// connection13_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse47States state;
} Connection13Synapse47;

// connection13_synapse47 Initialisation function
void Connection13Synapse47Init(Connection13Synapse47* me);

// connection13_synapse47 Execution function
void Connection13Synapse47Run(Connection13Synapse47* me);

#endif // CONNECTION13_SYNAPSE47_H_