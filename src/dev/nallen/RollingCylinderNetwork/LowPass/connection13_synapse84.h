#ifndef CONNECTION13_SYNAPSE84_H_
#define CONNECTION13_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse84 States
enum Connection13Synapse84States {
    CONNECTION13_SYNAPSE84_L,
};

// connection13_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse84States state;
} Connection13Synapse84;

// connection13_synapse84 Initialisation function
void Connection13Synapse84Init(Connection13Synapse84* me);

// connection13_synapse84 Execution function
void Connection13Synapse84Run(Connection13Synapse84* me);

#endif // CONNECTION13_SYNAPSE84_H_