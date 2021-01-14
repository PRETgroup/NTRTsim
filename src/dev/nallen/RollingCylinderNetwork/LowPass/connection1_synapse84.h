#ifndef CONNECTION1_SYNAPSE84_H_
#define CONNECTION1_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse84 States
enum Connection1Synapse84States {
    CONNECTION1_SYNAPSE84_L,
};

// connection1_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse84States state;
} Connection1Synapse84;

// connection1_synapse84 Initialisation function
void Connection1Synapse84Init(Connection1Synapse84* me);

// connection1_synapse84 Execution function
void Connection1Synapse84Run(Connection1Synapse84* me);

#endif // CONNECTION1_SYNAPSE84_H_