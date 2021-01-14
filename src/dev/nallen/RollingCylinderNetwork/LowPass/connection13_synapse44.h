#ifndef CONNECTION13_SYNAPSE44_H_
#define CONNECTION13_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse44 States
enum Connection13Synapse44States {
    CONNECTION13_SYNAPSE44_L,
};

// connection13_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse44States state;
} Connection13Synapse44;

// connection13_synapse44 Initialisation function
void Connection13Synapse44Init(Connection13Synapse44* me);

// connection13_synapse44 Execution function
void Connection13Synapse44Run(Connection13Synapse44* me);

#endif // CONNECTION13_SYNAPSE44_H_