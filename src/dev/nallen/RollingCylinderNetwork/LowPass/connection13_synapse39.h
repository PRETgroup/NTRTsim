#ifndef CONNECTION13_SYNAPSE39_H_
#define CONNECTION13_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse39 States
enum Connection13Synapse39States {
    CONNECTION13_SYNAPSE39_L,
};

// connection13_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse39States state;
} Connection13Synapse39;

// connection13_synapse39 Initialisation function
void Connection13Synapse39Init(Connection13Synapse39* me);

// connection13_synapse39 Execution function
void Connection13Synapse39Run(Connection13Synapse39* me);

#endif // CONNECTION13_SYNAPSE39_H_