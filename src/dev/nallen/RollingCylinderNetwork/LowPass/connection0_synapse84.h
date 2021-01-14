#ifndef CONNECTION0_SYNAPSE84_H_
#define CONNECTION0_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse84 States
enum Connection0Synapse84States {
    CONNECTION0_SYNAPSE84_L,
};

// connection0_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse84States state;
} Connection0Synapse84;

// connection0_synapse84 Initialisation function
void Connection0Synapse84Init(Connection0Synapse84* me);

// connection0_synapse84 Execution function
void Connection0Synapse84Run(Connection0Synapse84* me);

#endif // CONNECTION0_SYNAPSE84_H_