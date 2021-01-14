#ifndef CONNECTION13_SYNAPSE51_H_
#define CONNECTION13_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse51 States
enum Connection13Synapse51States {
    CONNECTION13_SYNAPSE51_L,
};

// connection13_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse51States state;
} Connection13Synapse51;

// connection13_synapse51 Initialisation function
void Connection13Synapse51Init(Connection13Synapse51* me);

// connection13_synapse51 Execution function
void Connection13Synapse51Run(Connection13Synapse51* me);

#endif // CONNECTION13_SYNAPSE51_H_