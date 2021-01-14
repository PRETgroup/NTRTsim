#ifndef CONNECTION13_SYNAPSE50_H_
#define CONNECTION13_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse50 States
enum Connection13Synapse50States {
    CONNECTION13_SYNAPSE50_L,
};

// connection13_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse50States state;
} Connection13Synapse50;

// connection13_synapse50 Initialisation function
void Connection13Synapse50Init(Connection13Synapse50* me);

// connection13_synapse50 Execution function
void Connection13Synapse50Run(Connection13Synapse50* me);

#endif // CONNECTION13_SYNAPSE50_H_