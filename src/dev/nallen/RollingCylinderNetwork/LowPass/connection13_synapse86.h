#ifndef CONNECTION13_SYNAPSE86_H_
#define CONNECTION13_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse86 States
enum Connection13Synapse86States {
    CONNECTION13_SYNAPSE86_L,
};

// connection13_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse86States state;
} Connection13Synapse86;

// connection13_synapse86 Initialisation function
void Connection13Synapse86Init(Connection13Synapse86* me);

// connection13_synapse86 Execution function
void Connection13Synapse86Run(Connection13Synapse86* me);

#endif // CONNECTION13_SYNAPSE86_H_